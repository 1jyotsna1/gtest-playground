#include <gtest/gtest.h>
#include "./monitor.h"

//Fake Dependencies - substitute real dependencies
void DisplayTestDouble(string content){

}

void BlinkTestDouble(){

}

TEST(MonitorTest,VitalAllOkTest){
    //Happy Path
int actualResult=vitalsOk(98.6f,72.0f,98.0f,&DisplayTestDouble,&BlinkTestDouble);
EXPECT_EQ(actualResult,1);
}