#include <gtest/gtest.h>
#include "calculator.h"

//Test Cases
//Given 10,20 when add method called , Then result 30 is expected

class ClaculatroeTestFixture : public ::testing::Test {
protected:
    int  operand1  = 10;
    int operand2 = 20;
    int actualResult=0;
};


TEST_F(ClaculatroeTestFixture,AssertAddFunction){
    
    int actualRe
    int expectedResult=30;
    //Act - invoke code under test
    actualResult=add(operand1,operand2);
    //Assert - validate measurement points
    ASSERT_EQ(actualResult,expectedResult);


}

TEST_F(ClaculatroeTestFixture,AssertSubFunction){
    //Arrange - preconditions , prepare input data
     int expectedResult=-10;
    //Act - invoke code under test
    actualResult=sub(operand1,operand2);
    //Assert - validate measurement points
    ASSERT_EQ(actualResult,expectedResult);

}
