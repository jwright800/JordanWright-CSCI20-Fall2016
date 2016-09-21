/* 
    Jordan Wright
    9/20/16
    This program gets a weight in pounds and converts kilograms into pounds and then a kilogram weight and converts it to pounds.
*/

#include <iostream> 
using namespace std;

double ToKilo(double lbValue = 0)
{
    return lbValue / 2.21;
}

double ToPounds(double kgValue = 0)
{
    return kgValue * 2.21;
}

int main() 
{
    double oldWeight = 0;   // scope of oldWeight is until the end of the main function
    double newWeight = 0;   // scope of newWeight is until the end of the main function

    cout << "Enter a weight in kilograms to convert to pounds: ";
    cin >> oldWeight;
    newWeight = ToPounds(oldWeight);
    cout << endl << oldWeight << " kg is " << newWeight << " lbs." << endl << endl;
    
    cout << "Enter a weight in pounds to convert to kilograms: ";
    cin >> oldWeight;
    newWeight = ToKilo(oldWeight);
    cout << endl << oldWeight << " lbs is " << newWeight << " kg." << endl << endl;

    return 0;
}