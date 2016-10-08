/* 
    Jordan Wright
    10/7/16
    This program prints minute increments between the hours of 1 pm and 2 pm.
    Then asks the user for two hours of the day and prints every 15 minute increments between the two hours.
*/

#include <iostream> 
using namespace std;

int main(){
    
    int hour = 1;
    int startHour;
    int endHour;
    int min = 0;
    
    while(hour < 3){
        
        cout << hour << ":";
        if (min < 10){
            cout << "0";
        }
        cout << min << " pm" << endl;
            
        if (min == 59){
            min = 0;
            ++hour;
        }
        else {
            ++min;
        }
                
    }
    
    cout << endl << "What hour would you like to start at? (1-12): ";
    cin >> startHour;
    cout << endl << "What hour would you like to end at? (1-12): ";    
    cin >> endHour;
    min = 0;
    if (startHour > endHour){
        endHour = endHour + 12;   
    }
    
    while(startHour < endHour){
        
        if (startHour > 12){
            cout << startHour - 12 << ":";
        }
        else cout << startHour << ":";
        
        if (min == 60){
            min = 0;
        }
        if (min < 10){
            cout << "0";
        }
        cout << min;
        if (startHour > 11){
            cout << " pm" << endl;
        }
        else {
            cout << " am" << endl;
        }

        min = min + 15;
        if (min == 60){
            ++ startHour;
        }
    }
    if (endHour > 12){
        cout << endHour - 12 << ":00 pm";
    }
    else {
        cout << endHour << ":00 am";
    }
    
    return 0;
}