# ⚙ Watchdog

The purpose of the IWDT is to ensure that interrupt service routines (ISRs) are not blocked from running for a prolonged period of time (i.e., the IWDT timeout period). Blocking ISRs from running in a timely manner is undesirable as it can increases ISR latency, and also prevents task switching (as task switching is executed form an ISR). The things that can block ISRs from running include:

- Disabling interrupts
- Critical Sections (also disables interrupts)
- Other same/higher priority ISRs (will block same/lower priority ISRs from running it completes execution)

## ⚡ Install

1. Download the code
2. Add the folder under `Arduino/libraries`
3. Restart Arduino IDE

## 🔧 Library details

Public functions:

- `Watchdog(int alarmPeriod)`

    Contructor, inform the `alarmPeriod` in seconds to activate the Watchdog

- `void begin()`

    Initiate the Watchdog

- `void handle()`

    Reset the Watchdog time

## 🖌 Example

```c++
#include <Watchdog.h>

Watchdog wdt(5);

void setup() {
  Serial.begin(9600);
  wdt.begin();
}

void loop() {
  wdt.handle();
}
```


## 🙋‍♂️ Support & Contributing

Contributions are welcome! Feel free to open an issue or submit a pull request if you have a way to improve this project.

Make sure your request is meaningful and you have tested the app locally before submitting a pull request.

💙 If you like this project, give it a ⭐ and share it with friends!
