//atm.h
#include "bank_account.h"
#include <iostream>

using std::cout;
using std::cin;

#ifndef ATM_H
#define ATM_H

class ATM
{

public:
    ATM(BankAccount b) : account(b){}
    void dispaly_balance();
    void make_deposit();
    void make_withdraw();

private:
    BankAccount account;
};

#endif

void dispaly_balance(BankAccount account)
{
    cout<<" Free function dispaly_balance "<<account.get_balance()<<"\n";
}
