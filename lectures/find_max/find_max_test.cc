#include "find_max.h"
#include "gtest/gtest.h"

TEST(FindMax, WorksForASmallSizeVectorOfPositiveNumbers){
    std::vector<int> input={1, 2, 100, 4, 5};
    int expected = 100;
    EXPECT_EQ(FindMax(input), expected);
}

TEST(FindMax, WorksForASinglElementVector){
    std::vector<int> input={1};
    int expected = 1;
    EXPECT_EQ(FindMax(input), expected);
}

TEST(FindMax,WorksIfThereAreNoInputs){
    std::vector<int> input={};
    int expected = -1;
    EXPECT_EQ(FindMax(input), expected);
}