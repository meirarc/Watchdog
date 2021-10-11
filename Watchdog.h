/**
 * @file Watchdog.h
 * @author meirarc
 * @brief Watchdog library
 * @version 0.1
 * @date 2021-10-11
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef Watchdog_h
#define Watchdog_h

#include <esp_task_wdt.h>

class Watchdog 
{
    public:
      Watchdog(int alarmPeriod);
      void begin();
      void handle();

    private:
      int _alarmPeriod;
};

#endif
