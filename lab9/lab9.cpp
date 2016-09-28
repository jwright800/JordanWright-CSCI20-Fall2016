/* 
    Jordan Wright
    9/22/16
    This program has a class that converts temperatures to kelvin, celsius and farenheit.
*/

#include <iostream> 
using namespace std;

class TemperatureConverter {
    public:
        TemperatureConverter();           //constructors
        TemperatureConverter(double kelvin_ini);
        
        void SetTempFromKelvin(double temp); // mutators
        void SetTempFromCelcius(double celsius);
        void SetTempFromFahrenheit(double faren);
        
        double GetTempFromKelvin() const; // accessors
        double GetTempAsCelcius() const;
        double GetTempAsFahrenheit() const;
        
        void PrintTemps() const;
        
    
    private:
        double kelvin_;
        
    
};

TemperatureConverter::TemperatureConverter() //Default constructor
{
    kelvin_ = 0;    
    return;
}

TemperatureConverter::TemperatureConverter(double kelvin_ini) //Second constructor
{
    kelvin_ = kelvin_ini;
    return;
}

void TemperatureConverter::SetTempFromKelvin(double temp)
{
    kelvin_ = temp;
    return;
}

double TemperatureConverter::GetTempFromKelvin() const
{
    return kelvin_;
}

void TemperatureConverter::SetTempFromCelcius(double celsius)
{
    kelvin_ = celsius + 273.15;
    return;
}

void TemperatureConverter::SetTempFromFahrenheit(double faren)
{
    kelvin_ = (5 * (faren - 32) / 9) + 273.15;
    return;
}

double TemperatureConverter::GetTempAsCelcius() const
{
    return kelvin_ - 273.15;
}

double TemperatureConverter::GetTempAsFahrenheit() const
{
    return ((kelvin_ - 273.15) * 9 / 5) + 32;
}

void TemperatureConverter::PrintTemps() const
{
    cout << "Celcius: " << GetTempAsCelcius() << endl << "Fahrenheit: " << GetTempAsFahrenheit() << endl << "Kelvin: " << kelvin_ << endl;
}
