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
