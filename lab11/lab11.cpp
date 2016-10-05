/* 
    Jordan Wright
    10/4/16
    This program calculates income tax and the amount to be refunded or owed by a person.
*/

#include <iostream> 
#include <string>
using namespace std;

int main(){
    
    string userName;
    int filingStatus = 0;
    double grossWages = 0;
    double adjustedWages = 0;
    double withheld = 0;
    double adjustedIncome;
    double taxedAmount;
    double refund;
    
    cout << "Enter your name: ";
    getline(cin, userName);
    
    cout << endl << "What is your filing status? (Enter 1 for single and 2 for married): ";
    cin >> filingStatus;
    
    cout << endl << "Enter your gross wages for this year: $";
    cin >> grossWages;
    
    cout << endl << "Enter your amount withheld: $";
    cin >> withheld;
    cout << endl << endl;
    
    if (filingStatus == 1){
        adjustedWages = grossWages - 10000;
        if (adjustedWages < 0){
            taxedAmount = 0;
        }
        else if (adjustedWages <= 8925){
           taxedAmount = adjustedWages * .10; 
        }
        else if (adjustedWages <= 36250){
            taxedAmount = (adjustedWages - 8925) * .15 + 892.5;
        }
        else if (adjustedWages <= 87850){
            taxedAmount = (adjustedWages - 36250) * .25 + 4991.25;
        }
        else {
            taxedAmount = (adjustedWages - 87850) * .28 + 17891.25;
        }
    }
    else {
        adjustedWages = grossWages - 13900;
        if (adjustedWages < 0){
            taxedAmount = 0;
        }
        else if (adjustedWages <= 17850){
           taxedAmount = adjustedWages * .10; 
        }
        else if (adjustedWages <= 72500){
            taxedAmount = (adjustedWages - 17850) * .15 + 1785;
        }
        else {
            taxedAmount = (adjustedWages - 72500) * .28 + 9982.5;
        }
    }
    
    refund = withheld - taxedAmount;
    
    cout << "Name: " << userName << endl;
    cout << "Total Gross Adjusted Income: $" << grossWages << endl;
    cout << "Total tax owed: $";
    if (refund < 0){
        cout << taxedAmount - withheld << endl;
    }
    else {
        cout << "0" << endl;
    }
    cout << userName << " is entitled to a refund of $" << refund;

    return 0;
}