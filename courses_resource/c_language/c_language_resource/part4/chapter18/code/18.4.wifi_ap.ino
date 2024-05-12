#include <WiFi.h>

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  //delay(5000);
  Serial.println("Setting AP ...");
  WiFi.softAP("ESP32_AP","12345679");
  //delay(5000);
  IPAddress apip = WiFi.softAPIP();
  Serial.printf("ESP32 AP IP: %s\n",apip.toString());
  Serial.println(apip);

}

void loop() {
  // put your main code here, to run repeatedly:

}
