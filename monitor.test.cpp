#include <gtest/gtest.h>
#include "./monitor.h"


TEST(MonitorTest,VitalAllOkTest){
    //Happy Path
int actualResult=vitalsOk(98.6f,72.0f,98.0f);
EXPECT_EQ(actualResult,1);
}