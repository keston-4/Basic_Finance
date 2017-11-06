#include "gtest/gtest.h"
#include "../src/calculator.h"

TEST(FVCalculator, Normal) {
    EXPECT_EQ(calcFV(1000.0f, 0.1f, 0), 1000.0f);
    EXPECT_EQ(calcFV(1000.0f, 0.1f, 1), 1100.0f);
    EXPECT_EQ((int) calcFV(1000.0f, 0.2f, 5), 2488);
}

TEST(PVCalculator, Normal) {
    EXPECT_EQ(calcPV(1000.0f, 0.1f, 0), 1000.0f);
    EXPECT_EQ(calcPV(1000.0f, 1.0f, 1), 500.0f);
    EXPECT_EQ(calcPV(1000.0f, 1.0f, 5), 31.25f);
}

TEST(IRateCalculator, Normal) {
    EXPECT_EQ(calcRate(1000.0f, 1000.0f, 1), 0.0f);
    EXPECT_EQ((int) calcRate(4000.0f, 1000.0f, 2), 1);
    EXPECT_EQ((int)(calcRate(2500.0f, 1000.0f, 5) * 10000), 2011);
}


int main (int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);

    int returnValue;

    //Do whatever setup here you will need for your tests here
    //

    returnValue =  RUN_ALL_TESTS();

    //Do Your teardown here if required
    //

    return returnValue;
}
