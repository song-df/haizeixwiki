//Here are the contents for the file `/esp32-volatile-test/esp32-volatile-test/src/main.cpp`:

#include <Arduino.h>

bool buttonPressed = false;

void IRAM_ATTR handleButtonPress() {
    buttonPressed = true;
}

bool checkButton() {
     bool state = digitalRead(0) == LOW;
     volatile uint32_t result = 0;

    for(uint32_t i = 0; i < 5000000; i++) {
        result += (state ? i : 0);
        if(i % 1000000 == 0) {
            //asm volatile("nop");
        }
    }
    return state;
}

void setup() {
    Serial.begin(115200);
    delay(1000);
    pinMode(2, OUTPUT); // LED pin
    pinMode(0, INPUT_PULLUP); // Button pin

    //attachInterrupt(digitalPinToInterrupt(0), handleButtonPress, FALLING);
}

void loop() {
    static bool ledState = false;
    static uint32_t startCycle = 0;
    bool buttonState;
    
    startCycle = ESP.getCycleCount();

    if(buttonState = checkButton()){
        Serial.printf("[Cycles:%u] buttonState: PRESSED, Cycles spent: %u\n",ESP.getCycleCount(), ESP.getCycleCount() - startCycle);
    }

    digitalWrite(2, buttonState? HIGH : LOW);
    delay(200);

}