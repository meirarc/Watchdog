#include <Watchdog.h>

Watchdog::Watchdog(int alarmPeriod){
  _alarmPeriod = alarmPeriod;
}
void Watchdog::begin(){
  esp_task_wdt_init(_alarmPeriod, true);
  esp_task_wdt_add(NULL); 
}
void Watchdog::handle(){
   esp_task_wdt_reset();
}
