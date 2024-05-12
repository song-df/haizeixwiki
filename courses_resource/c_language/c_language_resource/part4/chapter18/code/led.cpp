#include <Arduino.h>
#include "led.h"

void led_init()
{
  pinMode(LED_PIN,OUTPUT);
  digitalWrite(LED_PIN,LOW);
}

void led_ctrl(int s)
{
  digitalWrite(LED_PIN,s?HIGH:LOW);
}