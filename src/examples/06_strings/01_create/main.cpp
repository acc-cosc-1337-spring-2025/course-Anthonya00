#include<iostream>
#include<string>

using std::cout;
using std::string;

int main()
{   
    int num = 0;

    string lang = "C++";
    cout<<"size: "<<lang.size()<<"\n";
    cout<<"capacity: "<<lang.capacity()<<"\n\n";

    lang.append("123456789012");

    string lang = "C++";
    cout<<"size: "<<lang.size()<<"\n";
    cout<<"capacity: "<<lang.capacity()<<"\n\n";

    lang.append("1");

    string lang = "C++";
    cout<<"size: "<<lang.size()<<"\n";
    cout<<"capacity: "<<lang.capacity()<<"\n";


    return 0;
}