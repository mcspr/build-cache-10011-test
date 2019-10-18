#include "config.h"

#include <Arduino.h>

void setup() {
    Serial.begin(115200);
    Serial.flush();
    Serial.println(FEATURE_SET);
}

void loop() {}
