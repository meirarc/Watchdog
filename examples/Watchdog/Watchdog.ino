/**
 * @file Watchdog.ino
 * @author meirarc (you@domain.com)
 * @brief Simple example of the watchdog library use
 * @version 0.1
 * @date 2021-10-11
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <Watchdog.h>

Watchdog wdt(5);

void setup() {
  Serial.begin(9600);
  wdt.begin();
}

void loop() {
  wdt.handle();
}
