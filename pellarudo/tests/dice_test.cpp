#include "Dice.hpp"
#include "gmock/gmock.h"

class DiceTest: public testing::Test {
};

TEST_F(DiceTest, TestInit) {
    pellarudo::Dice dice = pellarudo::Dice(7);
    ASSERT_EQ(dice.get_value(), 7);
}
