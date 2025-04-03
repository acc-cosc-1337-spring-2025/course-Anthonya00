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

//FREE FUNCTIOIN - NOT PART OF THE BANKACCOUNT CLASS
void dispaly_balance(BankAccount account)
{
    cout<<" Free function dispaly_balance "<<account.get_balance()<<"\n";
}
BankAccount get_account()
{
    BankAccount account(500);
    return account;
}
BankAccount& get_reference_account()
{
    BankAccount account(500);
    return account;
}