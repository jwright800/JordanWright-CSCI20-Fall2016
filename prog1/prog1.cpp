/*
    Jordan Wright
    Date Created: 9/8/16
    Last Modified: 9/8/16
    Summary: The goal of this program is to calculate the user's gross pay and net pay. Then print
             out a wage slip containing the the information the user entered and the calculated data.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string user_name;       // Variables required.
    float rate;
    int hours;
    float gross_pay;
    float net_pay;
    
    cout << "This program is going to calculate your weekly gross pay and net pay after estimated taxes." << endl; // Begin getting user input.
    cout << endl << "First, what is your name?: ";
    getline(cin, user_name);
    
    cout << endl << "What is your hourly rate: $";
    cin >> rate;
    
    cout << endl << "How many hours do you work per week?: ";
    cin >> hours;
    
    gross_pay = rate * hours;                       // Calculate gross pay.
    net_pay = gross_pay - (gross_pay * .17);        // Calculate net pay.
    
    cout << endl << "Name: " << user_name << endl;  // Print wage slip.
    cout << "Hourly rate: $" << rate << endl;
    cout << "Weekly hours: " << hours << endl;
    cout << "Gross pay: $" << gross_pay << endl;
    cout << "Net pay: $" << net_pay << endl;
    
    return 0;
}