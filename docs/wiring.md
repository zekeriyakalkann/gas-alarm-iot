# Wiring / Pin Mapping

## Arduino Uno
- MQ-5 (Analog Output) -> A0
- DHT11 Data -> D4
- Green LED -> D10
- Yellow LED -> D9
- Red LED -> D8
- Buzzer -> D11

## SoftwareSerial (Arduino <-> ESP8266)
- Arduino RX (D2) <- ESP8266 TX
- Arduino TX (D3) -> ESP8266 RX

## LCD (I2C)
- Address: 0x27
- SDA/SCL: Arduino I2C pins (board dependent)

## Notes
- Use a common GND between Arduino and ESP8266.
- ESP8266 is 3.3V logic; use proper level shifting if needed.
