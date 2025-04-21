#include "text_output.h"

using std:: cout; using std::string;
using std::ofstream; using std:: ifstream; using std:: getline;

void output_data_to_file()
{

    cout<<"Cretate the fiule object..\n";
    ofstream my_file;
    cout<<"open the file\n";
    my_file.open("example.dat");

    cout<<"Write to file...\n";
    my_file<<"Write to file...\n";
    my_file<<"Write to file again\n";
    my_file<<"write to file again..\n";

    my_file.close();
}

void read_data_from_file()
{
    string line;
    cout<<"Create the file object / variable ...\n";

    

}