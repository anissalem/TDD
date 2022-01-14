#include <gtest/gtest.h>

#include "main.h"

TEST(Maintest, RomanIequal1) { EXPECT_EQ(1, RomanToInt("I")); }
TEST(Maintest, RomanVequal5) { EXPECT_EQ(5, RomanToInt("V")); }
TEST(Maintest, RomanIIequal2) { EXPECT_EQ(2, RomanToInt("II")); }
TEST(Maintest, RomanXequal10) { EXPECT_EQ(10, RomanToInt("X")); }
TEST(Maintest, RomanIVequal4) { EXPECT_EQ(4, RomanToInt("IV")); }
TEST(Maintest, EmptyRomanequal0) { EXPECT_EQ(0, RomanToInt("")); }
TEST(Maintest, NotARomanNumber1) { EXPECT_EQ(-1, RomanToInt("#")); }
TEST(Maintest, NotARomanNumber2) { EXPECT_EQ(-1, RomanToInt("I#")); }