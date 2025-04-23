//customer.cpp
#include "customer.h"

using std:: make_unique;

Customer:Customer (BankAccountDB db)
{
    accounts.push_back(make_unique<CheckingAccount>(db.get_balance(1500)));
    accounts.push_back(make_unique<SavingsAccount>(db.get_balance(2000)));

}

BankACCount * customer :: get_account(int index)
{
    return accounts [index]get();

}
