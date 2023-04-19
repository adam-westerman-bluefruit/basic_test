#include "Validator.hpp"
#include <stdexcept>

Validator::Validator(int low, int high): mLow{low}, mHigh{high}
{

}

bool Validator::inRange(int value)
{
    return value >= mLow && value <= mHigh;
}