
#include <Arduino.h>
#include <math.h>

#define NTC_PIN 7

// NTC parameters
const float R_FIXED = 10000.0;  // Fixed resistor: 10K
const float R_NOMINAL = 10000.0; // NTC resistance at 25°C
const float BETA = 3950.0;       // Assumed Beta value
const float T_NOMINAL = 25.0;    // Nominal temperature

void setup() {
  Serial.begin(115200);
  analogReadResolution(12);
  analogSetPinAttenuation(NTC_PIN, ADC_11db);

  delay(1000);
  Serial.println("ESP32-S3 NTC Temperature Sensor");
  Serial.println("--------------------------------");
}

void loop() {
  int adcValue = analogRead(NTC_PIN);

  if (adcValue <= 0 || adcValue >= 4095) {
    Serial.println("Error: Check NTC wiring!");
    delay(1000);
    return;
  }

  // Calculate NTC resistance
  float resistance = R_FIXED * adcValue / (4095.0 - adcValue);

  // Calculate temperature using Beta formula
  float temperature;
  float steinhart;

  steinhart = resistance / R_NOMINAL;
  steinhart = log(steinhart);
  steinhart /= BETA;
  steinhart += 1.0 / (T_NOMINAL + 273.15);
  steinhart = 1.0 / steinhart;
  temperature = steinhart - 273.15;

  // Display temperature
  Serial.print("Temperature: ");
  Serial.print(temperature, 1);
  Serial.println(" °C");

  delay(1000);
}
