
#define NTC_PRE_HEAT_H
#include "pindef.h"
#include <Thermistor.h>
#include <NTC_Thermistor.h>

  Thermistor* preHeat;

  static inline float getPreHeatTemp(void) {
  
  preHeat = new NTC_Thermistor(
    ntcPreHeatPin, //SENSOR_PIN
    100000, //REFERENCE_RESISTANCE
    100000, //NOMINAL_RESISTANCE
    25, //NOMINAL_TEMPERATURE
    3950, //B_VALUE
    4095 //STM32_ANALOG_RESOLUTION // <- for a thermistor calibration
  );
  return preHeat->readCelsius();
}
