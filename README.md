# ⚡ Smart IoT-Based Energy Monitoring System

A real-time AC electrical parameter monitoring system built with **ESP8266 NodeMCU** and **PZEM-004T v3.0** sensor, featuring local LCD display and remote Blynk IoT cloud dashboard.

---

## 📌 Overview

This project is an embedded IoT system that continuously measures and monitors key electrical parameters of an AC power line. Data is displayed locally on a 20×4 I2C LCD and transmitted wirelessly to the **Blynk IoT Cloud** for remote monitoring via a mobile or web dashboard.

---

## 🛠️ Tech Stack

| Component | Details |
|---|---|
| **Microcontroller** | ESP8266 NodeMCU |
| **Energy Sensor** | PZEM-004T v3.0 |
| **Display** | 20×4 I2C LCD (Address: 0x27) |
| **IoT Platform** | Blynk Cloud |
| **Communication** | WiFi (ESP8266WiFi) |
| **Protocol** | I2C (Wire.h) |
| **Language** | C++ (Arduino Framework) |
| **IDE** | Arduino IDE |

---

## 📊 Monitored Parameters

| Parameter | Unit | Blynk Pin |
|---|---|---|
| Voltage | V | V4 |
| Frequency | Hz | V0 |
| Current | A | V5 |
| Power | W | V9 |
| Power Factor | — | V8 |
| Energy | kWh | V1 |

---

## 🔌 Hardware Connections

```
ESP8266 NodeMCU
│
├── D3, D4  ──── PZEM-004T v3.0  (UART: RX/TX)
│
├── D1 (SCL) ─── I2C LCD 20x4
├── D2 (SDA) ─── I2C LCD 20x4
│
└── WiFi ──────── Blynk Cloud (blynk.cloud)
```

---

## 📚 Libraries Required

Install the following libraries via Arduino Library Manager:

- `ESP8266WiFi` — Built-in with ESP8266 board package
- `BlynkSimpleEsp8266` — Blynk IoT
- `LiquidCrystal_I2C` — LCD Display
- `PZEM004Tv30` — Energy Sensor

---

## ⚙️ Configuration

Before uploading, update the following in the main sketch:

```cpp
// Wi-Fi Credentials
char ssid[] = "YOUR_WIFI_SSID";
char pass[] = "YOUR_WIFI_PASSWORD";

// Blynk Auth Token (from Blynk Console)
char auth[] = "YOUR_BLYNK_AUTH_TOKEN";
```

---

## 🚀 How It Works

1. **ESP8266** connects to WiFi and authenticates with Blynk cloud
2. **PZEM-004T** sensor reads AC parameters every second
3. Data is displayed on the **20×4 LCD** in real-time
4. Simultaneously, data is sent to **Blynk virtual pins** for remote dashboard monitoring
5. `sensor()` → reads & displays data | `send()` → pushes data to Blynk

---

## 📱 Blynk Dashboard Setup

Configure the following widgets in Blynk Console:

| Widget | Virtual Pin | Label |
|---|---|---|
| Value Display | V4 | Voltage (V) |
| Value Display | V0 | Frequency (Hz) |
| Value Display | V5 | Current (A) |
| Value Display | V9 | Power (W) |
| Value Display | V8 | Power Factor |
| Value Display | V1 | Energy (kWh) |

---

## 📁 Project Structure

```
smart-energy-monitoring-system/
├── environment_control_system.ino   # Main Arduino sketch
├── New Text Document.txt            # Full featured code (development)
└── README.md                        # Project documentation
```

---

## 👨‍💻 Author

**Perera** — [GitHub](https://github.com/Perera0000)
**Hashini** — [GitHub](https://github.com/hasineenikesala)

---

## 📄 License

This project is open source and available under the [MIT License](LICENSE).
