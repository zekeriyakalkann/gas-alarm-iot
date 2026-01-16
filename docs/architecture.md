# System Architecture

## Overview
This project is an embedded + IoT safety system that detects gas/smoke conditions and notifies the user in real time.

## Hardware
- Arduino Uno
- MQ-5 gas sensor (analog)
- DHT11 temperature/humidity sensor
- I2C LCD (0x27)
- LEDs (green/yellow/red) + buzzer
- ESP8266 (Wi-Fi)

## Software Architecture
The firmware is modular:
- `sensors`: reads MQ and DHT11
- `logic`: decides system state based on gas threshold + hysteresis
- `actuators`: controls LEDs and buzzer
- `display`: prints temperature/humidity and status on LCD
- `comm`: sends alarm packets to ESP8266 over SoftwareSerial

## State Machine
- CLEAN: gas < threshold - hysteresis
- WARNING: threshold - hysteresis <= gas < threshold
- ALARM: gas >= threshold

## Communication Protocol (Arduino -> ESP8266)
Line-based packet format:
- `ALARM,<temperature>,<humidity>`
Example:
- `ALARM,24,50`

## Timing
- Main loop delay: 200 ms
- Alarm notification interval: 15 seconds
