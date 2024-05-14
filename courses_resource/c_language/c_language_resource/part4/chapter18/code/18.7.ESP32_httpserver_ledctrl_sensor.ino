#include <WiFi.h>
#include <ESPAsyncWebServer.h>
#include <AHT20.h>
#include <Wire.h>
#include "led.h"

#define SSID  "Xiaomi_Jack_2.4G"
#define PASSWD  "135792460"
#define IIC_SDA 4
#define IIC_SCL 15

AsyncWebServer server(80);//http server port

AHT20 aht20;

const char index_html[] PROGMEM = R"rawliteral(<!DOCTYPE HTML><html>
<head>
<style>
  <style>
    /* Flexbox layout to center the button */
    body {
      display: flex;
      justify-content: center;
      align-items: center;
      height: 100vh;
      margin: 0;

    }
    .sensor-value {
      font-size: 2.0rem;
    }
    html {
      font-family: Arial;
      display: inline-block;
      margin: 0px auto;
      text-align: center;
    }

    h2 {
      font-size: 3.0rem;
      text-align: center;
    }

    p {
      font-size: 3.0rem;
    }

    .units {
      font-size: 1.2rem;
    }

    .dht-labels {
      font-size: 1.5rem;
      vertical-align: middle;
      padding-bottom: 15px;
    }

    /* Button Style */
    .custom-button {
      display: inline-block;
      background-color: #007BFF;
      color: white;
      border-radius: 10px;
      padding: 20px 40px;
      font-size: 2.5rem;
      cursor: pointer;
      transition: background-color 0.3s ease;
    }

    .custom-button:hover {
      background-color: #0056b3;
    }
</style>
</head>
<body>
  <div><h2>ESP32 LED Control</h2></div>
  <p>
    <button onclick="toggleLED()" class="custom-button">Toggle LED</button>
  </p>
  <h2>ESP32 Sensor Data</h2>
  <p class="sensor-value" id="sensorValue">Loading...</p>

</body>
<script>
function toggleLED() {
  var xhttp = new XMLHttpRequest();
  xhttp.onreadystatechange = function() {
    if (this.readyState == 4 && this.status == 200) {
      // 请求成功后，更新按钮文本以反映LED状态
      var button = document.querySelector("button");
      if (button.innerText === "Toggle LED") {
        button.innerText = "LED ON";
      } else {
        button.innerText = "Toggle LED";
      }
    }
  };

  // 发送LED控制请求到服务器端
  var ledState = document.querySelector("button").innerText === "Toggle LED" ? 1 : 0;
  xhttp.open("POST", "/led", true);
  xhttp.setRequestHeader("Content-Type", "application/x-www-form-urlencoded");
  xhttp.send("state=" + ledState);
}
function fetchSensorData() {
    console.log("Fetching sensor data...");
    var xhttp = new XMLHttpRequest();
    xhttp.onreadystatechange = function() {
      if (this.readyState == 4 && this.status == 200) {
        document.getElementById("sensorValue").innerHTML = this.responseText;
      }
    };
    xhttp.open("GET", "/sensor", true);
    xhttp.send();
  }
setInterval(fetchSensorData, 3000);  // 每3000毫秒（3秒）请求一次数据
</script>
</html>)rawliteral";
float readSensor()
{
  return rand()%100;
  //return aht20.getTemperature();
}
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  led_init();
  Wire.begin(IIC_SDA,IIC_SCL);
  if(!aht20.begin()){
    Serial.println("AHT20 begin failure!");
  }
  WiFi.begin(SSID,PASSWD);
  delay(500);
  // Serial.println(WiFi.status());
  // if(WL_CONNECTED == WiFi.status())
  //   Serial.println("wifi connect success!");
  // else
  //   Serial.println("wifi connect failure!");
  while(WiFi.status() != WL_CONNECTED){
    Serial.println(WiFi.status());
    delay(1000);
    Serial.print(".");
  }
  Serial.print("\nIP:");
  Serial.println(WiFi.localIP());

  server.on("/",HTTP_GET,[](AsyncWebServerRequest* request){
    request->send_P(200,"text/html",index_html);
  });//注册了根服务函数
  server.on("/led",[](AsyncWebServerRequest* request){
    if(request->hasParam("state",true)){
      int ledState = request->getParam("state",true)->value().toInt();
      Serial.print("LEDState:");
      Serial.println(ledState);
      led_ctrl(ledState);
    }
    request->send(200,"text/plain","LED State Changed!");
  });
  server.on("/sensor",HTTP_GET,[](AsyncWebServerRequest * request){
    float sensorValue = readSensor();
    Serial.print("sensor value: ");
    Serial.println(sensorValue);
    request->send(200,"text/plain",String(sensorValue));
  });
  server.begin();

}

void loop() {
  // put your main code here, to run repeatedly:

}
