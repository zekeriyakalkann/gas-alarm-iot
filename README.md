# IoT Gas Leak & Smoke Alarm System

An embedded and IoT-based safety system designed to detect gas leaks and smoke
and notify users in real time.

## 🔧 Hardware
- Arduino Uno
- MQ-5 Gas Sensor
- ESP8266 (NodeMCU)
- Buzzer
- LEDs
- LCD Display (planned)
- Temperature & Humidity Sensor (planned)

## 🧠 System Overview
The system continuously monitors gas levels and triggers visual, audible,
and cloud-based alerts when dangerous thresholds are exceeded.

## 📡 IoT Features
- Wi-Fi communication via ESP8266
- Real-time notifications (IFTTT)

## 🗂️ Project Structure
- `arduino/` -> Arduino firmware
- `esp8266/` -> ESP8266 communication code
- `docs/` -> Architecture and design documents
- `media/` -> Images and demo videos

## 🚧 Current Status
- Core gas detection implemented
- LCD and temperature/humidity integration in progress

## 📄 Documentation
See `/docs/architecture.md` for system design details.

## ▶️ Setup & Run

### Arduino (UNO)
1. Install required libraries in Arduino IDE:
   - DHT sensor library
   - LiquidCrystal_I2C
2. Open `arduino/main.ino`
3. Select the correct board and port, then upload.

### ESP8266
1. Install ESP8266 board support in Arduino IDE (Boards Manager).
2. Open `esp8266/esp8266_main.ino`
3. Create your local secrets file:
   - Keep keys private and add them during activation/deployment.
4. Select the correct ESP8266 board and port, then upload.

### Demo
- Photos and demo link: see `/media`
- Architecture details: see `/docs/architecture.md`


