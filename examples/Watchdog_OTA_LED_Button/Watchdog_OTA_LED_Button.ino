/**
 * @file Watchdog_OTA_LED_Button.ino
 * @author meirarc
 * @brief 
 *    Full example of use custom libraries for Wathcdog, OTA updates, led and button control
 *    To use the WIFI and OTA library use the additional libraries below are needed:
 *        https://github.com/zhouhan0126/WIFIMANAGER-ESP32.git
 *        https://github.com/zhouhan0126/DNSServer---esp32.git
 *        https://github.com/zhouhan0126/WebServer-esp32.git
 *
 * @version 0.1
 * @date 2021-10-11
 * 
 * @copyright Copyright (c) 2021 
 */

#include <Watchdog.h>   // https://github.com/meirarc/Watchdog.git
#include <WifiOTA.h>    // https://github.com/meirarc/WifiOTA.git
#include <Button.h>     // https://github.com/meirarc/Button.git
#include <Led.h>        // https://github.com/meirarc/Led.git

Watchdog wdt(10);
WifiOTA wifi;
Button buttom(0);
Led led_built_in(LED_BUILTIN);


void setup() {
  Serial.begin(9200);
  wdt.begin();
  wifi.begin();
  led_built_in.on();
}

void loop() {
  wdt.handle();
  wifi.handle();
  if (buttom.isPressed()) {
    led_built_in.off();
    wifi.reset();   
  }
}