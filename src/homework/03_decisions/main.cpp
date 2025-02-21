#include<iostream>
#include"decisions.h"

using std::cout;
using std::cin;

//write include statements

int main() 
{
	auto option = 1;//you dont need the zero if you dont want it 
	cout<< "MAIN MENU \n 1-Letter grade using if \n 2-Letter grade using switch \n 3-Exit \n";
	cin>> option;
	
	if (option == 3 ) { 
		return 0; 
	}

	int grades = 100;
	cout<<"Enter grades: \n";
	cin>> grades;

	if (option == 1 ) {
		char leter_grade = get_letter_grade_using_if(grades);
		cout<<leter_grade<<"\n";	
	}

	
	if (option == 2 ) {
		char leter_grade = get_letter_grade_using_switch(grades);
		cout<<leter_grade<<"\n";	

	}

	


	auto grade_value = get_letter_grade_using_if(100);

	cout<<" ";


	return 0;
}