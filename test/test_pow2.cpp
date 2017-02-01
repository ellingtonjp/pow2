#include "pow2.h"
#include <gtest/gtest.h>

TEST(pow2, negative) {
  EXPECT_EQ(1.0/(32), pow2(-5));
}

TEST(pow2, zero) {
  EXPECT_EQ(1, pow2(0));
}

TEST(pow2, positive) {
  EXPECT_EQ(32, pow2(5));
}
