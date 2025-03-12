#include<iostream>
#include<string>

using std::cout;
using std::string;

int main()
{   
    string lang = "C++";
    int num = 5;

    cout<<lang<<"\n";
    cout<<"Address of lang: "<<&lang<<"\n";
    cout<<"Address of num: "<<&lang<<"\n";

    cout<<lang[0]<<"\n";

    cout<<"Addres of character at 0 index C: "<<static_cast<void*>(&lang[0])<<"\n";
    cout<<"Addres of character at 1 index +: "<<static_cast<void*>(&lang[1])<<"\n";
    cout<<"Addres of character at 2 index +: "<<static_cast<void*>(&lang[2])<<"\n";


    return 0;
}