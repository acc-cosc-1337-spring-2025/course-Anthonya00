#include "function_str.h"

using std:: cout;
using std:: string;

void string_value_param(string lang)

{

    for(auto ch: lang)
    {
        ch = '.';
    }

    cout<<lang<<"\n";

}