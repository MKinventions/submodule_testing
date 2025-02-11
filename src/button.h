#ifndef BUTTON_H
#define BUTTON_H

#include <Arduino.h>

class BUTTON {
public:
    BUTTON(int pin);
    int push();
private:
    int btnPin;
};

#endif