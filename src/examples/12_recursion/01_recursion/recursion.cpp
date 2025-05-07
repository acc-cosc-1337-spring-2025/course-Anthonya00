#include "recursion.h"
#include <iostream>


using std::cout;

void runaway_recursion()
{

    cout<<"runaway...\n";
    runaway_recursion;



}
//Write code for recursive display function

void dispaly(int num)

{
    if (num == 0)
    {
        cout<<"base case\n";
        return;
    }

    cout<<"load to stack"<<num<<"\n";
    display(num-1);

    cout<<"unload from stack\n";

}


//Write code for recursive factorial

int recursice_factorial(int num)
{
    int f;
    int r;

    {
        cout<<"base case\n";
        return 1;
    }

    cout<<"load to stack"<<num-1<<"\n";
    r = recursive_factorial(num-1);
    f = num * r;
    cout<<"unload from stack num"<<num<<"r: "<<r<<" f:"<<f<<"\n";

    return f;
}
