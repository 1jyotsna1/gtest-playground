#include "./monitor.h"
#include <assert.h>
#include <thread>
#include <chrono>
#include <iostream>
using std::cout, std::flush, std::this_thread::sleep_for, std::chrono::seconds;


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

//Single Responsibility Principle Applied
//Co-oridanator- Facade Api
int vitalsOk(float temperature, float pulseRate, float spo2,OutputFnPtr displayFun,FomatFnPtr formatFn) {

  if (isTemperatureCritical(temperature)) {
    displayFun("Temperature is critical!");
    formatFn();
    return 0;
  }

  if (isPulseRateCritical(pulseRate)) {
    OutputFnPtr("Pulse Rate is out of range!");
   formatFn();
    return 0;
  }

  if (isSpo2Critical(spo2)) {
    OutputFnPtr("Oxygen Saturation out of range!");
    formatFn();
    return 0;
  }

  return 1;
}

/*
int vitalsOk(float temperature, float pulseRate, float spo2) {
  if (temperature > 102 || temperature < 95) {
    cout << "Temperature is critical!\n";
    for (int i = 0; i < 6; i++) {
      cout << "\r* " << flush;
      sleep_for(seconds(1));
      cout << "\r *" << flush;
      sleep_for(seconds(1));
    }
    return 0;
  } else if (pulseRate < 60 || pulseRate > 100) {
    cout << "Pulse Rate is out of range!\n";
    for (int i = 0; i < 6; i++) {
      cout << "\r* " << flush;
      sleep_for(seconds(1));
      cout << "\r *" << flush;
      sleep_for(seconds(1));
    }
    return 0;
  } else if (spo2 < 90) {
    cout << "Oxygen Saturation out of range!\n";
    for (int i = 0; i < 6; i++) {
      cout << "\r* " << flush;
      sleep_for(seconds(1));
      cout << "\r *" << flush;
      sleep_for(seconds(1));
    }
    return 0;
  }
  return 1;
}*/
