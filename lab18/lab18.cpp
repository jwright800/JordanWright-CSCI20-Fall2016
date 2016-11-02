/*
    Jordan Wright
    11/2/16
    This program gets the users first and last name and produces three different possible usernames.
*/

#include <iostream>
#include <string>
using namespace std;

int main(){
    
    string userFirstName;
    string userLastName;
    
    string username1;
    string username2;
    string username3;
    
    do{
        
        cout << "Enter your first name: ";
        cin >> userFirstName;
        
        if(userFirstName.size() > 10){
            cout << endl << "The name entered is too large." << endl;
        }
        
    } while(userFirstName.size() > 10);

    do{
    
        cout << "Enter your last name: ";
        cin >> userLastName;
        
        if(userLastName.size() > 20){
            cout << endl << "The name entered is too large." << endl;
        }
    
    } while(userLastName.size() > 20);
    
    if(userFirstName == userLastName){
        cout << "WARNING: First and Last names are the same." << endl;
    }
    
    username1 = userFirstName + userLastName;
    
    username2 = userFirstName;
    username2.resize(1);
    username2.append(userLastName);
    
    username3 = userFirstName;
    username3.resize(2);
    username3.append("_");
    username3.append(userLastName);
    
    cout << endl << "Recommended usernames: " << endl
        << username1 << endl 
        << username2 << endl
        << username3 << endl;
}