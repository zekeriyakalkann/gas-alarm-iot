#include "logic.h"
#include "config.h"

SystemState decideState(int gas) {
  if (gas < ESIK_DEGER - HISTERESIS) return STATE_CLEAN;
  if (gas < ESIK_DEGER)             return STATE_WARNING;
  return STATE_ALARM;
}
