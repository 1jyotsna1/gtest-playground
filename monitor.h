#pragma once
#include <string>
using namespace std;
using OutputFnPtr = void (*)(string);
using  FomatFnPtr = void (*)();

int vitalsOk(float temperature, float pulseRate, float spo2,OutputFnPtr displayFun,FomatFnPtr formatFn);