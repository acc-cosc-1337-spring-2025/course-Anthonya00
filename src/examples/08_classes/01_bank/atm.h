//atm.h
#include "bank_account.h"
#include "customer.h"
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

//FREE FUNCTION- NOT PART OF THE BANKACCOUNT CLASS
void dispaly_balance(BankAccount account);
BankAccount get_account();
BankAccount& get_reference_account();

