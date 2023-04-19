#include "Validator.hpp"
#include <stdexcept>

Validator::Validator(int low, int high): mLow{low}, mHigh{high}{}

void Validator::setLimits(int low, int high)
{
    mLow = low;
    mHigh = low; // <-- hint
}

bool Validator::inRange(int value)
{
    return value >= mLow && value <= mHigh;
}