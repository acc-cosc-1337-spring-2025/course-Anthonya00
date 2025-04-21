//function code

#include "temperature_data.h"

void TemperatureData:: save_temps(const std:: vector<Temperature>& temps)
{
    ofstream file;
    cout<<"Open the file...\n";

    cout<<"Write to file...\n";

    for (auto temp: temps)
    {
        file<<



    }

vector<jTemperature> TemperatureData:: get_temps()
{
    
    vector<Temperature> temps;

    auto hour = 0;
    auto reading = .1;

    ifstream file;

    cout<<"Open the file.. \n";
    file.open(file_name);

    cout<<"Read from the file...\n";

    if(file.is_open())
    {
        while(file>>hour>>reading)
        {
            

        }

    } 