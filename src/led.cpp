#include "led.h"

LED::LED(int pin) {
    ledPin = pin;
    pinMode(ledPin, OUTPUT);
}

void LED::blink(int delayTime) {
    digitalWrite(ledPin, HIGH);
    delay(delayTime);
    digitalWrite(ledPin, LOW);
    delay(delayTime);
}
