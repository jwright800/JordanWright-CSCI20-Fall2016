/* 
    Jordan Wright
    10/6/16
    This program uses if statements and switch statements to determine the users animal based off their preferences.
*/

#include <iostream> 
using namespace std;

int main(){
    char answer;
    
    cout << "What animal are you?" << endl << endl << "Do you like the outdoors? (Y/N): ";
    cin >> answer;
    
    if (answer == 'y' || answer == 'Y'){
        cout << "Do you like to run? (Y/N): ";
        cin >> answer;
        if (answer == 'y' || answer == 'Y'){
            cout << "You are a horse!";
        }
        else {
            cout << "You are a turtle!";
        }
    }
    else {
        cout << "Do you like cheese? (Y/N): ";
        cin >> answer;
        switch (answer){
            case 'Y':
            case 'y':
                cout << "You are a mouse!";
                break;
                
            default: 
                cout << "Do you like to swim? (Y/N): ";
                cin >> answer;
                
                switch (answer){
                    case 'Y':
                    case 'y':
                        cout << "You are fish!";
                        break;
                        
                    default: 
                        cout << "You are a cat!";
                        break;
                break;
                }
        }
    }
        
    
    return 0;
}