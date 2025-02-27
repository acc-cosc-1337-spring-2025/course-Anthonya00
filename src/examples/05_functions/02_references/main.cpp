#include<iostream>

using std::cout;


int main()
{
    auto num = 10; 
    //referrence variable
    auto &num_ref = num; //num_ref will hold the address of num
    
    
    cout<<"Num value: "<<num<<"\n"; //display the value of num
    cout<<"Num variable is at address: "<<&num<<"\n";//memory operator & reference

    cout<<"value of num via num_ref: "<<num_ref<<"\n";//display the value of the memory address you store
    cout<<"Address that num_ref sotres: "<<&num_ref<<"\n";

    num_ref = 20;
    cout<<"Num value: "<<num<<"\n";
    cout<<"value of num via num_ref: "<<num_ref<<"\n";


    return 0;
}