/**
* 在RTC存储空间里存储一个数据，在休眠后再启动，这个数据会被读出
*/
#include "esp_sleep.h"
#include "esp_attr.h"

RTC_SLOW_ATTR int rtcCount = 0;//SLOW RTC Memory
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  delay(1000);
  Serial.print("rtcCount = ");
  Serial.println(rtcCount);
  Serial.printf("rtcCount at %p\n",&rtcCount);
  rtcCount++;

  Serial.println("模块将要进入深度休眠 5s...");
  esp_sleep_enable_timer_wakeup(5000000);
  esp_deep_sleep_start();
}

void loop() {
  // put your main code here, to run repeatedly:

}
