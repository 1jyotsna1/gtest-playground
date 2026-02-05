#include "gmock_demo.h"

/* Decision Logic Functions */
bool isTemperatureCritical(float temperature) {
  return temperature > 102 || temperature < 95;
}

bool isPulseRateCritical(float pulseRate) {
  return pulseRate < 60 || pulseRate > 100;
}

bool isSpo2Critical(float spo2) {
  return spo2 < 90;
}


int vitalsOk(float temperature, float pulseRate, float spo2,IDisplayContent* displayPtr,IAnimator* animatePtr){
    if (isTemperatureCritical(temperature)) {
    displayPtr->display("Temperature is critical!");
    animatePtr->animate();
    return 0;
  }

  if (isPulseRateCritical(pulseRate)) {
    displayPtr->display("Pulse Rate is out of range!");
  animatePtr->animate();
    return 0;
  }

  if (isSpo2Critical(spo2)) {
     displayPtr->display("Oxygen Saturation out of range!");
     animatePtr->animate();
    return 0;
  }

  return 1;
}