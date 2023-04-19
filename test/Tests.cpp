#include <gtest/gtest.h>
#include "../src/Account.hpp"
#include "../src/Validator.hpp"

class BinaryTest: public testing::Test
{
    public:
        // void SetUp() override;
        int getBit(uint8_t value, uint8_t bit)
        {
            uint8_t mask = 0b00000001 << bit;
            uint8_t maskedVal = value&mask;
            return maskedVal>>bit;
        }
    protected:
        Account mAcc;
};


TEST_F(BinaryTest, test1)
{
    // Given, When
    uint8_t value = 0b11111111;

    // Then
    ASSERT_EQ(getBit(value,0),1);
    ASSERT_EQ(getBit(value,1),1);
    ASSERT_EQ(getBit(value,2),1);
    ASSERT_EQ(getBit(value,3),1);
    ASSERT_EQ(getBit(value,4),1);
    ASSERT_EQ(getBit(value,5),1);
    ASSERT_EQ(getBit(value,6),1);
    ASSERT_EQ(getBit(value,7),1);
}

TEST_F(BinaryTest, test2)
{
    // Given, When
    uint8_t value = 0b00000000;

    // Then
    ASSERT_EQ(getBit(value,0),0);
    ASSERT_EQ(getBit(value,1),0);
    ASSERT_EQ(getBit(value,2),0);
    ASSERT_EQ(getBit(value,3),0);
    ASSERT_EQ(getBit(value,4),0);
    ASSERT_EQ(getBit(value,5),0);
    ASSERT_EQ(getBit(value,6),0);
    ASSERT_EQ(getBit(value,7),0);
}

TEST_F(BinaryTest, test3)
{
    // Given, When
    uint8_t value = 0b00010010;

    // Then
    ASSERT_EQ(getBit(value,0),0);
    ASSERT_EQ(getBit(value,1),1);
    ASSERT_EQ(getBit(value,2),0);
    ASSERT_EQ(getBit(value,3),0);
    ASSERT_EQ(getBit(value,4),1);
    ASSERT_EQ(getBit(value,5),0);
    ASSERT_EQ(getBit(value,6),0);
    ASSERT_EQ(getBit(value,7),0);
}
