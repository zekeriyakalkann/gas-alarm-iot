#pragma once
#include <Arduino.h>

struct SensorData {
  int gas;
  int temperature;
  int humidity;
};

void sensorsInit();
SensorData sensorsRead();
