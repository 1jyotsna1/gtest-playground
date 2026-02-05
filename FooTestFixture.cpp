#include <iostream>
using namespace std;
#include <gtest/gtest.h>

class FooTest : public testing::Test {
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
    out<<"TestCase Setup"<<endl;
   }

  // You can define per-test tear-down logic as usual.
  void TearDown() override {
    out<<"TestCase Teardown"<<endl;
  }

  // Some expensive resource shared by all tests.
  static T* shared_resource_;
};



TEST_F(FooTest, Test1) {
  
}

TEST_F(FooTest, Test2) {
  
}