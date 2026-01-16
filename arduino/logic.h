#pragma once
#include <Arduino.h>

enum SystemState {
  STATE_CLEAN,
  STATE_WARNING,
  STATE_ALARM
};

SystemState decideState(int gas);
