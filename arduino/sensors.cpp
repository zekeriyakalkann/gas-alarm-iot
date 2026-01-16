#include "sensors.h"
#include "config.h"
#include <DHT.h>

static DHT dht(DHTPIN, DHTTYPE);

void sensorsInit() {
  dht.begin();
}

SensorData sensorsRead() {
  SensorData d;
  d.gas = analogRead(GAZ_SENSOR_PIN);

  d.temperature = (int)dht.readTemperature();
  d.humidity    = (int)dht.readHumidity();

  return d;
}
