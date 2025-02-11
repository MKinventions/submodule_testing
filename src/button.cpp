#include "button.h"

BUTTON::BUTTON(int pin) {
    btnPin = pin;
    pinMode(btnPin, INPUT_PULLUP);
}

// void LED::blink(int delayTime) {
//     digitalWrite(ledPin, HIGH);
//     delay(delayTime);
//     digitalWrite(ledPin, LOW);
//     delay(delayTime);
// }

int BUTTON::push(){
    return !digitalRead(btnPin);
}