/* Created By: April Browne
 * Created On: 9/22/2016
 * This program will run the Temperature Converter Class
 */
 
#include<iostream>
#include "lab9.cpp"
using namespace std;

int main ()
{
    TemperatureConverter temp1; //testing default constructor
    TemperatureConverter temp2(274); //testing overloaded constructor
    
    temp1.PrintTemps();
    temp2.PrintTemps();
    
    temp1.SetTempFromKelvin(400.15); //testing mutator function
    cout<<temp1.GetTempFromKelvin()<<endl;//testing accessor function
    temp1.PrintTemps();
    
    temp2.SetTempFromCelcius(32); //testing other functions
    cout<<temp2.GetTempAsCelcius()<<endl;
    temp2.PrintTemps();
    
    temp2.SetTempFromFahrenheit(32);
    cout<<temp2.GetTempAsFahrenheit()<<endl;
    temp2.PrintTemps();
    
    return 0;
}