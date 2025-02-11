#ifndef BUTTON_H
#define BUTTON_H

#include <Arduino.h>

class BUTTON {
public:
    BUTTON(int pin);
    // void blink(int delayTime);
private:
    int btnPin;
};

#endif