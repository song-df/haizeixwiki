#include <WiFi.h>

#define SSID  "Xiaomi_Jack_2.4G"
#define PASSWD  "135792460"

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  WiFi.begin(SSID,PASSWD);
  // delay(5000);
  // Serial.println(WiFi.status());
  // if(WL_CONNECTED == WiFi.status())
  //   Serial.println("wifi connect success!");
  // else
  //   Serial.println("wifi connect failure!");
  while(WiFi.status() != WL_CONNECTED){
    Serial.println(WiFi.status());
    delay(300);
    Serial.print(".");
  }
  Serial.print("IP:");
  Serial.println(WiFi.localIP());
}

void loop() {
  // put your main code here, to run repeatedly:

}
