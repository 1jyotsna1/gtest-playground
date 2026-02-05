#include <gtest/gtest.h>
#include "./monitor.h"


TEST(MonitorTest,VitalAllOkTest){
    //Happy Path
int actualResult=vitalsOk(normalTemp,normalPulse,normalSpo2);
EXPECT_EQ(actualResult,1);
}