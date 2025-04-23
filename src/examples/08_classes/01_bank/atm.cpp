//atm.cpp
#include "atm.h"
#include "checkingaccount.h"
#include "savings_account.h"
#include <iostream>
#include vector
#include memory 

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

void run_menu()
{
    //list of uniqque ptr to accounts 
    auto account_index = 0, bank_menu_choice=0;
    BankAccountDB DB;
    vector<Customer>customers;
    customers.push_back(Customer(db));
    customers.push_back(Customer(db));
    customers.push_back(Customer(db));
    customers.push_back(Customer(db));
    customers.push_back(Customer(db));
    cout<<customers.size()<<"\n";



    
    auto customer_index = rand() % customer
    //loop prompt user for checking or savings 

    do {
        cout<<"Enter 1 for checking 2 for savings : ";
        cin>>account_index;

        auto* account = customers [customer_index].get();
        ATM atm (account);

    }

    do{

        //loop display menu handle user options
        do 
        {
            

                /* code*/
        }while (bank_menu_choice != 4 );
    }

}

void display_menu()

{
    cout<<"\n"


}

void handle_menu_option(ATM& atm, int menu_choice)