# submodule_testing
sub module testing

# CustomLED Library

A simple Arduino library for blinking LEDs.

## Usage

```cpp
#include "CustomLED.h"

CustomLED led(13);

void setup() {
    Serial.begin(115200);
}

void loop() {
    led.blink(500);
}
