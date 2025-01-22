
#define NTC_GROUP_HEAD_H
#include "pindef.h"
#include <Thermistor.h>
#include <NTC_Thermistor.h>

  Thermistor* groupHead;

  static inline float getGroupHeadTemp(void) {
  
  groupHead = new NTC_Thermistor(
    ntcGroupPin, //SENSOR_PIN
    100000, //REFERENCE_RESISTANCE
    100000, //NOMINAL_RESISTANCE
    25, //NOMINAL_TEMPERATURE
    3950, //B_VALUE
    4095 //STM32_ANALOG_RESOLUTION // <- for a thermistor calibration
  );
  return groupHead->readCelsius();
}
