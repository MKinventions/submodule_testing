#ifndef LED_H
#define LED_H

#include <Arduino.h>

class LED {
public:
    LED(int pin);
    void blink(int delayTime);
private:
    int ledPin;
};

#endif
