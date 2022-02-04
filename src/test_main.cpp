#include <gtest/gtest.h>

#include "main.h"

// Test

TEST(Maintest, RomanIequal1) { EXPECT_EQ(1, RomanToInt("I")); }

TEST(Maintest, RomanIequal2) { EXPECT_EQ(2, RomanToInt("II")); }

TEST(Maintest, RomanIequal3) { EXPECT_EQ(3, RomanToInt("III")); }

TEST(Maintest, RomanIequal4) { EXPECT_EQ(4, RomanToInt("IV")); }

TEST(Maintest, RomanIequal4BIS) { EXPECT_EQ(-1, RomanToInt("IIII")); }