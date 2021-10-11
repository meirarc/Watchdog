/**
 * @file Watchdog.cpp
 * @author meirarc
 * @brief Watchdog library
 * @version 0.1
 * @date 2021-10-11
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <Watchdog.h>

/**
 * @brief Construct a new Watchdog:: Watchdog object
 * 
 * @param alarmPeriod in seconds
 */
Watchdog::Watchdog(int alarmPeriod){
  _alarmPeriod = alarmPeriod;
}

/**
 * @brief begion(). Initiate the service
 * 
 */
void Watchdog::begin(){
  esp_task_wdt_init(_alarmPeriod, true);
  esp_task_wdt_add(NULL); 
}

/**
 * @brief hamndle(). To trigger the wathcdog on the loop()
 * 
 */
void Watchdog::handle(){
   esp_task_wdt_reset();
}
