 ```markdown
# IGNIFUME_AFire and Smoke Detection System (Arduino Uno)

## 🌟DON'T forget to star the repo if you find this helpful. 

An Arduino Uno–based safety project that continuously monitors the environment using an **MQ-2 smoke/gas sensor** and a **flame sensor** to detect potential fire hazards. When smoke concentration or flame presence crosses a defined threshold, the system triggers an alert (e.g., buzzer/LED) and can be extended to IoT notifications.

This project is designed for **microprocessor/system programming, control engineering, and hardware prototyping** learning. It helps students understand real-world applications of microcontrollers and sensors and provides a foundation for advanced **IoT-based fire detection** solutions.


## Features
- Real-time monitoring of:
  - **Smoke/Gas** levels (MQ-2, analog)
  - **Flame** detection (digital/analog depending on module)
- Threshold-based hazard detection
- Local alarm output (typical: **buzzer + LED**)
- Serial Monitor logging for debugging and calibration
- Modular design for upgrades (GSM/Wi‑Fi alerts, relays, dashboards, etc.)


## Components Required (Hardware)
- **Arduino Uno**
- **MQ-2 Smoke/Gas sensor module**
- **Flame sensor module**
- **Buzzer** (active buzzer preferred) and/or **LED**
- Breadboard + jumper wires
- USB cable (for power/programming)

> Optional upgrades:
- Relay module (to cut power or activate sprinkler/fan)
- ESP8266/ESP32 or GSM module (for IoT/SMS alerts)
- LCD/OLED for local display


## Software / Tools
- **Arduino IDE**
- Arduino Uno USB drivers (you may use it if required by your OS)


### MQ-2
- VCC → 5V  
- GND → GND  
- AO  → **A0** (analog input)  
- (Optional) DO → a digital pin (if using module comparator output)

### Flame Sensor
- VCC → 5V  
- GND → GND  
- DO  → **D2** (digital input)  
- (Optional) AO → **A1** (if using analog mode)

### Alarm Outputs
- Buzzer (+) → **D8** (example)
- Buzzer (–) → GND  

---

## How It Works (Flow)
1. Arduino reads:
   - MQ-2 analog value (smoke/gas level)
   - Flame sensor output (flame present/not present)
2. If smoke exceeds a **calibrated threshold** OR flame is detected:
   - Activate buzzer/LED
   - Print alert status to Serial Monitor
3. Otherwise, keep monitoring continuously.



## Installation & Usage
1. Clone/download this repository.
2. Open the `.ino` file in **Arduino IDE**.
3. Select:
   - **Board:** Arduino Uno  
   - **Port:** your connected COM/tty port
4. Upload the sketch.
5. Open **Serial Monitor** (set the baud rate to match the code, e.g., `9600`).
6. Test:
   - MQ-2: expose briefly to smoke source (use caution)
   - Flame sensor: use a lighter/candle at a safe distance (use caution)


## Calibration Notes 
- MQ-2 sensors require **warm-up time** for stable readings (often a few minutes; longer for best stability).
- Determine a reliable **smoke threshold** by observing Serial Monitor readings in:
  - clean air (baseline)
  - mild smoke exposure
- Flame sensors can be sensitive to sunlight/IR sources—test in your target environment and adjust sensitivity (some modules include a trimpot).



## Applications
- Classroom demonstrations (microcontrollers + sensors)
- Home/room safety prototype
- Lab safety monitoring (with proper enclosure and power design)
- Starting point for:
  - IoT alerts (Blynk, MQTT, Firebase, ThingsBoard)
  - Data logging and analytics
  - Automated mitigation (relay-controlled fan/sprinkler)


## Safety Disclaimer
This project is a **prototype/educational system** and is **not** a certified fire safety device. Do not rely on it for life-safety applications. Always follow safe testing practices when working with flames or smoke.


## Future Improvements
- Add Wi‑Fi/GSM notifications (SMS/email/app push)
- Add temperature sensor (DHT11/DHT22/LM35) for multi-factor detection
- Implement adaptive thresholds and filtering (moving average)
- Add enclosure design + battery backup
- Integrate relay control for emergency shutdown/ventilation


## Contributing
Pull requests are welcome. For major changes, open an issue first to discuss what you’d like to improve.


## License
MIT License.
```
