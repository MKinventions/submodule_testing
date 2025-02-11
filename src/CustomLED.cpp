#include "CustomLED.h"

CustomLED::CustomLED(int pin) {
    ledPin = pin;
    pinMode(ledPin, OUTPUT);
}

void CustomLED::blink(int delayTime) {
    digitalWrite(ledPin, HIGH);
    delay(delayTime);
    digitalWrite(ledPin, LOW);
    delay(delayTime);
}
