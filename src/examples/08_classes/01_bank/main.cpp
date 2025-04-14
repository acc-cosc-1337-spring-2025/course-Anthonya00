#include "atm.h"
#include "bank_account.h"
#include "bank_account_db.h"
#include "savings_account.h"
#include <iostream>
#include <memory>
#include <vector>


using std::cout;using std::unique_ptr; using std:: make_unique;
using std::cin;


int main()
{	
	vector<unique_ptr<BankAccount>> accounts; 
	unique_ptr<BankAccount> checking = make_unique<CheckingAccount>(500);
	unique_ptr<BankAccount> svaings = make_unique<SavingsAccount>(1000);

	cout<<"checking get balance "<<checking-> get_balance()<<"\n";
	cout<<"savings get balance "<<savings->get_balance()<<"\n";

	accounts.push_back(std::move(checking));
	accounts.push_back(std::move(savings));

	//cout<<"checking get balance "<<checking-> get_balance()<<"\n"; ERRORS OUR//JCHECKING POINTS TO INVALID MEMORY

	for (auto &account: accounts)
	{
		cout<<account_>get_balance()<<"\n";
	}


	return 0;
}