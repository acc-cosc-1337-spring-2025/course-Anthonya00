//bank_account.h

class BankAccount
{
//access specifier variables/functions
public://outside code class/fucitons can use variables and functions that are public
    BankAccount(int b) : balance(b) {}//class contructor
    int get_balance(){return balance;}
private://only this class can use variables/functions
    int balance{};

};