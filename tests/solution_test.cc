#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(FindMaxTest, HandlesConsecutiveNumbers) {
  Solution solution;
  std::vector<int> inputs = {1, 2, 3, 4};
  EXPECT_EQ(solution.FindMax(inputs), 4);
  EXPECT_EQ(solution.FindMaxRecursive(inputs), 4);
}

TEST(FindMaxTest, HandlesConsecutiveNumbersOddLength) {
  Solution solution;
  std::vector<int> inputs = {1, 2, 3, 4, -1};
  EXPECT_EQ(solution.FindMax(inputs), 4);
  EXPECT_EQ(solution.FindMaxRecursive(inputs), 4);
}

TEST(FindMaxTest, HandlesSizeOne) {
  Solution solution;
  std::vector<int> inputs = {2};
  EXPECT_EQ(solution.FindMax(inputs), 2);
  EXPECT_EQ(solution.FindMaxRecursive(inputs), 2);
}

TEST(FindMaxTest, HandlesEmptyVector) {
  Solution solution;
  std::vector<int> inputs = {};
  EXPECT_EQ(solution.FindMax(inputs), -1);
  EXPECT_EQ(solution.FindMaxRecursive(inputs), -1);
}
