#include <gtest/gtest.h>
#include "../src/Validator.hpp"

class ValidatorTest: public testing::Test
{
    public:
        Validator val{0,0};
};


TEST_F(ValidatorTest, Validator_set_limits_stores_values_correctly)
{
    // Given
    int expectedLow = 1;
    int expectedHigh = 200;

    // When
    val.setLimits(expectedLow, expectedHigh);

    // Then
    ASSERT_EQ(expectedLow, val.getLowLimit());
    ASSERT_EQ(expectedHigh, val.getHighLimit());
}

TEST_F(ValidatorTest, Validator_in_Range_correctly_tells_if_value_is_in_range)
{
    // Given
    int expectedLow = 1;
    int expectedHigh = 10;
    val.setLimits(expectedLow, expectedHigh);

    // When,Then
    ASSERT_TRUE(val.inRange(1));
    ASSERT_TRUE(val.inRange(10));
    ASSERT_TRUE(val.inRange(5));
    ASSERT_FALSE(val.inRange(0));
    ASSERT_FALSE(val.inRange(11));
}
