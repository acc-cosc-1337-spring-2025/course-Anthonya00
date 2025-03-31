//atm.cpp
#include "atm.h"

using std::cout;
using std::cin;

void ATM::dispaly_balance()

{
    cout<<"Balance: "<<account.get_balance()<<"\n";
}

void ATM::make_deposit()
{
    auto amount = 0;
    cout<<"Enter Deposit amount: ";
    cin>>amount;
    account.deposit(amount);
}


void make_withdraw()

{
    auto amount = 0;
    cout<<"Enter withdraw amount: ";
    cin>>amount;
    account.withdraw(amount);
}