#pragma once
using OutputFnPtr = void (*)(const char*);
using  FomatFnPtr = void (*)();

int vitalsOk(float temperature, float pulseRate, float spo2,OutputFnPtr displayFun,FomatFnPtr formatFn)