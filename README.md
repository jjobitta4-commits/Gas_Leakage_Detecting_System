# 🔥 Gas Leakage Detector using Arduino and MQ-2

A simple and cost-effective **Gas Leakage Detection System** built using an **Arduino**, **MQ-2 gas sensor**, **LED**, and **buzzer**.

The system continuously monitors the gas concentration detected by the MQ-2 sensor. When the detected gas level exceeds a predefined threshold, the system activates an LED and buzzer to provide an immediate warning.

---

## 📌 Project Overview

Gas leakage can create serious safety risks in homes, kitchens, laboratories, industries, and other environments where combustible gases are used.

This project provides a basic real-time gas leakage warning system using the MQ-2 gas sensor.

The Arduino continuously reads the analog output from the MQ-2 sensor. The sensor value is compared with a predefined threshold.

### System behavior

- 🟢 **Normal Gas Level**
  - LED remains OFF
  - Buzzer remains OFF

- 🔴 **Gas Level Above Threshold**
  - LED turns ON
  - Buzzer turns ON
  - Warning is provided immediately

The current gas sensor reading is also displayed through the **Serial Monitor**.

---

## ✨ Features

- Real-time gas level monitoring
- MQ-2 gas sensor support
- Automatic gas leakage detection
- LED visual warning
- Buzzer audible warning
- Adjustable gas detection threshold
- Serial Monitor output
- Simple and low-cost hardware
- Easy to build and modify
- Suitable for Arduino-based safety projects

---

## 🛠️ Components Required

| Component | Quantity |
|---|---:|
| Arduino Uno | 1 |
| MQ-2 Gas Sensor | 1 |
| LED | 1 |
| Buzzer | 1 |
| 220Ω Resistor | 1 |
| Breadboard | 1 |
| Jumper Wires | As required |
| USB Cable | 1 |

---

## 🔌 Circuit Connections

### MQ-2 Gas Sensor

| MQ-2 Pin | Arduino |
|---|---|
| VCC | 5V |
| GND | GND |
| AO | A0 |

The **analog output (AO)** of the MQ-2 sensor is connected to Arduino's **A0** pin.

### LED

| LED | Arduino |
|---|---|
| Anode (+) | Digital Pin 8 through 220Ω resistor |
| Cathode (-) | GND |

### Buzzer

| Buzzer | Arduino |
|---|---|
| Positive (+) | Digital Pin 9 |
| Negative (-) | GND |

---

## 🔧 Pin Configuration

The project uses the following Arduino pins:

```text
MQ-2 Sensor Analog Output → A0
LED                      → D8
Buzzer                   → D9
