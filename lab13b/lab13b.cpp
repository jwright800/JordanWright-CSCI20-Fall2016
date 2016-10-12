/* 
    Jordan Wright
    10/11/16
    This program prints minute increments between the hours of 1 pm and 2 pm.
    Then asks the user for two hours of the day and prints every 15 minute increments between the two hours.
*/

#include <iostream> 
using namespace std;

int main(){
    
    int endHour;
    int startHour;
    int min;
    
    
    for(int i = 1; i<3; i++){
        
        for(int x = 0; x<60; x++){
            cout << i << ":";
            if (x < 10){
                cout << "0";
            }
            cout << x << " pm" << endl; 
        }
    }
    
    

    cout << endl << "What hour would you like to start at? (1-12): ";
    cin >> startHour;
    cout << endl << "What hour would you like to end at? (1-12): ";    
    cin >> endHour;
    if (startHour > endHour){
        endHour = endHour + 12;}
        
    for(startHour; startHour < endHour; ++startHour){
        
        for(min = 0; min <= 59; min = min + 15){
             if (startHour > 12){
            cout << startHour - 12 << ":";
            }
            else {cout << startHour << ":";
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
    
            
        }
    }
    cout << endHour << ":00";
    if (startHour > 11){
        cout << " pm" << endl;
    }
    else {
        cout << " am" << endl;
    }


    
    return 0;
}