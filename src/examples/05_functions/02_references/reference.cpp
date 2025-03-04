void ref_value_vars(int num1, int &num2 )
{
    num1 = 10;
    num2 = 20;
}

int get_product(int num1, int num2)
{
    auto product = num1 * num2;
    return num1 * num2;// product will return a error 
}    