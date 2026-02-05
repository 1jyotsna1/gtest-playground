#include "gmock_demo.h"
#include <gmock/gmock.h>
#include <gtest/gtest.h>

using ::testing::AtLeast;
using::testing::_;

class MockDisplay: public  IDisplayContent{
public:
  
   MOCK_METHOD(void, display,(string content), (override));
};

class MockAnimator: public IAnimator{
public:
 
  MOCK_METHOD (void, animate,(),(override));

};

TEST(MonitorTest,VitalAllOkTest){
    //Happy Path
    MockDisplay display_mock;
    MockAnimator animator_mock;
    EXPECT_CALL(display_mock, display(_))                  
      .Times(0);
      EXPECT_CALL(animator_mock, animate())               
      .Times(0);
    
int actualResult=vitalsOk(98.6f,72.0f,98.0f,&display_mock,&animator_mock);
//Asser on Mock State

EXPECT_EQ(actualResult,1);
}
