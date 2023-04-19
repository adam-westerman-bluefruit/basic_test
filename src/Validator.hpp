#pragma once

class Validator
{
public:
    Validator(int low, int high);
    bool inRange(int valueToTest);
protected:
    int mLow, mHigh;
};
