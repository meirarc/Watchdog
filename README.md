# ⚙ Watchdog
Watchdog for ESP32

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
