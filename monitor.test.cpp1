#include <gtest/gtest.h>
#include "./monitor.h"



//Fake Dependencies - substitute real dependencies, stub
void DisplayTestDouble(string content){

}
//stub
void BlinkTestDouble(){

}

//smart stubs -> Mock
//Record interaction

//Mock state
int displayCallCount=0;
int blickCallCount=0;

void DisplayTestDouble_mock(string content){
displayCallCount+=1;
}
//stub
void BlinkTestDouble_mock(){
blickCallCount+=1;
}
TEST(MonitorTest,VitalAllOkTest){
    //Happy Path
int actualResult=vitalsOk(98.6f,72.0f,98.0f,&DisplayTestDouble,&BlinkTestDouble);
//Asser on Mock State
EXPECT_EQ(displayCallCount,0);
EXPECT_EQ(blickCallCount,0);
EXPECT_EQ(actualResult,1);
}


TEST(MonitorTest,PulseRateTooHigh_ReturnsNotO){
    //Happy Path
int actualResult=vitalsOk(98.6f, 101.0f, 98.0f,&DisplayTestDouble,&BlinkTestDouble);
//Asser on Mock State
EXPECT_EQ(displayCallCount,1);
EXPECT_EQ(blickCallCount,1);
EXPECT_EQ(actualResult,0);
}