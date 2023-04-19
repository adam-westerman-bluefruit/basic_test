#pragma once

// an example object that will be tasked with remembering a low and high limit, 
// and returning wether a given int value sits within those limits, through the inRange() method

class Validator
{
public:
    Validator(int low, int high);
    void setLimits(int low, int high);
    bool inRange(int valueToTest);
    int getLowLimit(){return mLow;};
    int getHighLimit(){return mHigh;};
protected:
    int mLow, mHigh;
};
