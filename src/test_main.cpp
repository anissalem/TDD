#include <gtest/gtest.h>

#include "main.h"

// Test

TEST(Maintest, RomanIequal1) { EXPECT_EQ(1, RomanToInt("I")); }

TEST(Maintest, RomanIequal2) { EXPECT_EQ(2, RomanToInt("II")); }
