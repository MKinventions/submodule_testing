#ifndef CUSTOM_LED_H
#define CUSTOM_LED_H

#include <Arduino.h>

class CustomLED {
public:
    CustomLED(int pin);
    void blink(int delayTime);
private:
    int ledPin;
};

#endif
