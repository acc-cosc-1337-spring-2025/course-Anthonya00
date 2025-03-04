#include "do_while.h"

using std:: cout;

void use_do_while(int num)
{

    do
    {
        cout<<"Hello\n";
        num--;

    }while (num > 0);



}

//Write code for void function prompt_user to loop until
//user opts not to continue.  
void prompt_user()
{
    auto choice = 'y';

    do 
    {
        cout<<"Enter y to continue: ";
        cin>>choice;

    }while (choice == 'y' || coice == ' Y');

}

void dispay_menu()
{
    cout<<"1-Option 1\n";
    cout<<"2-Option 2\n";
    cout<<"3-Option 3\n";
    cout<<"14-EXIT 1\n";

}

void run_menu()
{
    auto choice = 0;
    
    do
    {

        diplay_menu();
        cout<<"Enter menu option ";
        cin>>choice;

    }while (choice != 4 );

}

void handle_menu_option(int choice)
{
    switch (choice)
    {
    case 1:
        cout<<"\nYou selected choice 1\n"
        break;
    case 2:
        cout<<"\nYou selected choice 1\n"
        break;
    case 3:
        cout<<"\nYou selected choice 1\n"
        break;
    case 4:
        cout<<"\nYou selected choice 1\n"
        break;

    default: 
        cout<<"\n=Invalid menu option\n"
        break;


    }

}

void multiplication_table_while(const int rows, const int cols)
{
    auto r = 0;

    do 
    {
        auto c = 0;
        do
        {
            /* code*/
        }while (c < cols);

        r++;

    }while (r < rows);

}