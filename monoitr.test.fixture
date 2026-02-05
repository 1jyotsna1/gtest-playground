#include <gtest/gtest.h>
#include "./monitor.h"

#include <gtest/gtest.h>

class VitalsTestFixture : public ::testing::Test {
protected:
    float normalTemp  = 98.6f;
    float normalPulse = 72..0f;
     float normalSpo2  = 98.0f;
     int expected=1;
     
};


//Happy Path
TEST_F(VitalsTestFixture, AllVitalsNormal_ReturnsOk) {
    EXPECT_EQ(vitalsOk(normalTemp,normalPulse,normalSpo2), 1);
}

//Temperatre Rekated Tests
TEST_F(VitalsTestFixture, TemperatureTooHigh_ReturnsNotOk) {
  
  //Arrange
  normalTemp=103.0f;
  expected=0;
  //Act
  int actual=vitalsOk(normalTemp,pulse,spo2);
  //Assert
  EXPECT_EQ(actual, expected);
}

TEST(VitalsOkTest, TemperatureTooLow_ReturnsNotOk) {
 
   //Arrange
  float temperature=94.0f;
  float pulse=72.0f;
  float spo2=98.0f;
  int expected=0;
  //Act
  int actual=vitalsOk(temperature,pulse,spo2);
  //Assert
  EXPECT_EQ(vitalsOk(actual,expected), 0);
}

TEST(VitalsOkTest, TemperatureAtUpperBoundary_ReturnsOk) {
    EXPECT_EQ(vitalsOk(102.0f, 72.0f, 98.0f), 1);
}

TEST(VitalsOkTest, TemperatureAtLowerBoundary_ReturnsOk) {
    EXPECT_EQ(vitalsOk(95.0f, 72.0f, 98.0f), 1);
}

//Pulserate Tests
TEST(VitalsOkTest, PulseRateTooLow_ReturnsNotOk) {
    EXPECT_EQ(vitalsOk(98.6f, 59.0f, 98.0f), 0);
}

TEST(VitalsOkTest, PulseRateTooHigh_ReturnsNotOk) {
    EXPECT_EQ(vitalsOk(98.6f, 101.0f, 98.0f), 0);
}

TEST(VitalsOkTest, PulseRateAtLowerBoundary_ReturnsOk) {
    EXPECT_EQ(vitalsOk(98.6f, 60.0f, 98.0f), 1);
}

TEST(VitalsOkTest, PulseRateAtUpperBoundary_ReturnsOk) {
    EXPECT_EQ(vitalsOk(98.6f, 100.0f, 98.0f), 1);
}
//SPO2 Test
TEST(VitalsOkTest, Spo2TooLow_ReturnsNotOk) {
    EXPECT_EQ(vitalsOk(98.6f, 72.0f, 89.0f), 0);
}

TEST(VitalsOkTest, Spo2AtBoundary_ReturnsOk) {
    EXPECT_EQ(vitalsOk(98.6f, 72.0f, 90.0f), 1);
}

//Failure
TEST(VitalsOkTest, TemperatureFailureHasPriorityOverOthers) {
    EXPECT_EQ(vitalsOk(103.0f, 40.0f, 85.0f), 0);
}
