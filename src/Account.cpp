#include "Account.hpp"
#include <stdexcept>

Account::Account() : mBalance(0){};

void Account::deposit(double sum)
{
    if(sum <= 0)
        throw std::invalid_argument("deposit must be positive and non-zero");
    mBalance += sum;
}

void Account::withdraw(double sum)
{
    if(sum <= 0)
        throw std::invalid_argument("deposit must be positive and non-zero");
    if(sum > mBalance)
        throw std::logic_error("insufficient funds");
    mBalance -= sum;
}

double Account::getBalance() const
{
    return mBalance;
}

void Account::transfer(Account &to, double sum)
{
    if(sum > mBalance)
        throw std::logic_error("insufficient funds");
    if(sum < 0)
        throw std::invalid_argument("deposit must be positive and non-zero");

    mBalance -= sum;
    to.deposit(sum);
}


