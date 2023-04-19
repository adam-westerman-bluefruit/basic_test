#ifndef _Example_H_
#define _Example_H_

#include <exception>

class Account
{
public:
    Account();
    void deposit(double sum);
    void withdraw(double sum);
    double getBalance() const;
    void transfer(Account &to, double sum);
private:
    double mBalance;
};


#endif