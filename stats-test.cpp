#include "stats.h"

#include "gtest/gtest.h"
#include <cmath>

TEST(Statistics, ReportsAverageMinMax) {
    auto computedStats = Statistics::ComputeStatistics({1.5, 8.9, 3.2, 4.5});
    float epsilon = 0.001;
    EXPECT_LT(std::abs(computedStats.average - 4.525), epsilon);
    EXPECT_LT(std::abs(computedStats.max - 8.9), epsilon);
    EXPECT_LT(std::abs(computedStats.min - 1.5), epsilon);
}

TEST(Statistics, AverageNaNForEmpty) {
    //All fields of computedStats (average, max, min) must be
    //NAN (not-a-number), as defined in math.h
    
    //Design the gtest EXPECT statement here.
    //Use http://www.cplusplus.com/reference/cmath/isnan/

    auto computedStats = Statistics::ComputeStatistics({NAN});
    EXPECT_TRUE(std::isnan(computedStats.average));
    EXPECT_TRUE(std::isnan(computedStats.min));
    EXPECT_TRUE(std::isnan(computedStats.max));
}
