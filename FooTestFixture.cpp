#include <iostream>
using namespace std;
#include <gtest/gtest.h>
#include "calculator.h"

struct CalculatorData {
    int operand1;
    int operand2;
    int expectedResult;
    
};

class CalculatorTest : public ::testing::TestWithParam<CalculatorData>{
 protected:
  // Per-test-suite set-up.
  // Called before the first test in this test suite.
  // Can be omitted if not needed.
  static void SetUpTestSuite() {
    cout<<"TestSuite Setup"<<endl;
}

  // Per-test-suite tear-down.
  // Called after the last test in this test suite.
  // Can be omitted if not needed.
  static void TearDownTestSuite() {
   cout<<"TestSuite TearDown"<<endl;
  }

  // You can define per-test set-up logic as usual.
  void SetUp() override { 
    cout<<"TestCase Setup"<<endl;
   }

  // You can define per-test tear-down logic as usual.
  void TearDown() override {
    cout<<"TestCase Teardown"<<endl;
  }

  
};

//Data Generation
INSTANTIATE_TEST_SUITE_P(
    CalculatAddDataGroup,
    CalculatorTest,
    ::testing::Values(

        // All normal
        CalculatorData{10, 20, 30},
        CalculatorData{10, 30, 40},
        CalculatorData{20, 20, 40},
        CalculatorData{100, 202, 300}
    )
);




TEST_P(CalculatorTest, Test1) {
  
    onst auto& data = GetParam();
    int actualResult=add(data.operand1,data.operand2);
    EXPECT_EQ(actualResult,data.expectedResult);
}

