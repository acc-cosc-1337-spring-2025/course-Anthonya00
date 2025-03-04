#include "static.h"

using std::cout;

void use_non_static_variable()

{
        int i = 0;
        i++;

        cout<<i<<"\n";

}

void use_static_variable()
{
    static int i =0;//make i presist its value actoss funtion calls
    i++;
    cout<<i<<"\n";

    void use_static_variable_1()
    {
        static int i =0;//make i presist its value actoss funtion calls
        i++;
        cout<<i<<"\n";


}