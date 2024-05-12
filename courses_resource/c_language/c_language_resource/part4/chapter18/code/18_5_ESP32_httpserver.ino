#include <WiFi.h>
#include <ESPAsyncWebServer.h>

#define SSID  "Xiaomi_Jack_2.4G"
#define PASSWD  "135792460"

AsyncWebServer server(80);//http server port
void webroot(AsyncWebServerRequest *request)
{
  Serial.println("web root");
  request->send(200,"text/html","Hello world from ESP32!");
}
void webone(AsyncWebServerRequest *request)
{
  Serial.println("web one");
  request->send(200,"text/html","Hello world from ESP32 webone function!");
}
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  WiFi.begin(SSID,PASSWD);
  delay(500);
  // Serial.println(WiFi.status());
  // if(WL_CONNECTED == WiFi.status())
  //   Serial.println("wifi connect success!");
  // else
  //   Serial.println("wifi connect failure!");
  while(WiFi.status() != WL_CONNECTED){
    //Serial.println(WiFi.status());
    delay(300);
    Serial.print(".");
  }
  Serial.print("\nIP:");
  Serial.println(WiFi.localIP());

  server.on("/",webroot);//注册了根服务函数
  server.on("/1",webone);

  server.begin();

}

void loop() {
  // put your main code here, to run repeatedly:

}
