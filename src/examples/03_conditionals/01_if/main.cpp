#include<iostream>
#include "if.h"//to use is_even function here

using std::cout;
using std::cin;


int main() 
{
	int min, max, num;

	cout<<"Enter min number: ";
	cin>>min;

	cout<<"Enter max number: ";
	cin>>max;

	cout<<"Enter number: ";
	cin>>num;

	auto in_range = is_number_in_range(min, max, num);

	cout<<in_range<<"\n";
	
	////////////

	char letter = 'a';

	cout<<is_vowel(letter)<<"\n";
	cout<<is_consonant(letter)<<"\n";

	int num = 100;

	//new

	auto is_even = is_number_even(num);

	if(is_even)
	{
		cout<<num<<" is even\n"
	}

	cout<<is_number_even(num)<<"\n";

	return 0;
}
