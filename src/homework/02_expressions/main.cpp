#include <iostream>
#include "hwexpressions.h"



int main()
{
	double meal_amount, tip_rate, tip_amount, tax_amount, total;
	std::cout << "Enter meal amount: ";
	std::cin >> meal_amount;

	tax_amount = get_sales_tax_amount(meal_amount);
	std::cout << "Enter tip rate: ";
	std::cin >> tip_rate;
	std::cout <<'\n';

	tip_amount = get_tip_amount(meal_amount,tip_rate);
	
	total = meal_amount + tax_amount + tip_amount;

	std::cout <<"Cost of meal: " << meal_amount << '\n';
	std::cout <<"Sales tax: " << tax_amount << '\n';
	std::cout <<"Tip amount: " << tip_amount << '\n';
	std::cout <<"Your total cost is: " << total << std::endl;
	
	return 0;


}
