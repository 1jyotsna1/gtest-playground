#pragma once
using OutputFnPtr = void (*)(const char*);
using  FomatFnPtr = void (*)();

int vitalsOk(float temperature, float pulseRate, float spo2,OutputFn displayFun,FomatFnPtr formatFn)