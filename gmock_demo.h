#pragma once
#include <string>
using namespace std;

class IDisplayContent{
public:
  virtual ~IDisplayContent() {}
  virtual void display(string content)=0;
};

class IAnimator{
public:
 virtual ~IAnimator() {}
  virtual void animate()=0;

};

int vitalsOk(float temperature, float pulseRate, float spo2,IDisplayContent* displayPtr,IAnimator* animatePtr);