#include <DS18B20.h>

#define DS18B20_SENSOR_PIN 3

DS18B20 ds(DS18B20_SENSOR_PIN);

void setup() {
  Serial.begin(115200);
}

void loop() {
  while (ds.selectNext()) {
    Serial.print("Temperature: ");
    Serial.print(ds.getTempC());
    Serial.println("*C");
  }
}