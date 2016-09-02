/*
    Jordan Wright
    9/1/16
    This program asks the user for change and displays the amount in quarter, dimes, nickels and pennies.
    It then charges a 10.9% fee.
*/

#include <iostream>
using namespace std;

int main()
{
    int cents = 0;
    int quarters = 0;
    int dimes = 0;
    int nickels = 0;
    int pennies = 0;
    int cents_new;
    float total = 0.00;
    float sub_total = 0.00;
    
    cout << "Enter your change: " << endl;
    cin >> cents;
    
    quarters = cents / 25;
    cents_new = cents % 25;
    
    dimes = cents_new / 10;
    cents_new = cents_new % 10;
    
    nickels = cents_new / 5;
    cents_new = cents_new % 5;
    
    pennies = cents_new / 1;
    
    cout << "You have entered: " << cents << " cents." << endl;
    cout << "That is " << quarters << " quarters, " << dimes << " dimes, " << nickels
         << " nickels, " << pennies << " pennies." << endl;
        
    total = (cents - (cents * .109)) / 100;
    sub_total = cents / 100.00;
    
    cout << "The total is $" << sub_total << ". After the fee, you get $" << total << " in cash.";
    
    return 0;
}