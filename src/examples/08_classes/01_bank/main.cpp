#include "bank_account.h"
#include "bank_account_db.h"
#include <iostream>
#include <time.h>
#include "atm.h"

using std::cout;
using std::cin;


int main()
{	
	srand(time(NULL));
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



	return 0;
}