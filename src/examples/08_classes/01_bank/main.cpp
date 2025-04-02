#include "atm.h"
#include "bank_account.h"
#include "bank_account_db.h"
#include <iostream>
#include <time.h>
#include "atm.h"
#include "checking_account.h"

using std::cout;
using std::cin;


int main()
{	
	BankAccountDB db;

	CheckingAccount account(db.get_balance());
	cout<<"Checking balance: "<<account.get_balance()<<"\n"

	/*srand(time(NULL));
	BankAccountDB db;
	//cout<<"Balance:" <<accountDB.get_balance();

	auto amount = 0;
	//variable of a class is equal to an object in memory
	BankAccount account(db.get_balance());//create our own variable from the newly created data type

	ATM atm(account);

	atm.dispaly_balance();
	atm.make_deposit();
	atm.dispaly_balance();
	atm.make_withdraw();
	atm.dispaly_balance();

	BankAccount account1 = get_account();
	dispaly_balance(account1);*/

	return 0;
}