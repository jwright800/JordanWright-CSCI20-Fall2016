/*
    Jordan Wright
    11/1/16
    This program gets the users first and last name and produces three different possible usernames.
*/

#include <iostream>
#include <cstring>
using namespace std;

int main(){
    
    char userFirstName[10];
    char userLastName[20];
    
    char username1[30];
    char username2[30];
    char username3[30];
    
    do{
        
        cout << "Enter your first name: ";
        cin >> userFirstName;
        
        if(strlen(userFirstName) > 10){
            cout << endl << "The name entered is too large." << endl;
        }
        
    } while(strlen(userFirstName) > 10);

    do{
    
        cout << "Enter your last name: ";
        cin >> userLastName;
        
        if(strlen(userLastName) > 20){
            cout << endl << "The name entered is too large." << endl;
        }
    
    } while(strlen(userLastName) > 20);
    
    if(strcmp(userFirstName, userLastName) == 0){
        cout << "WARNING: First and Last names are the same." << endl;
    }
    
    strcpy(username1, userFirstName);
    strcat(username1, userLastName);
    
    strcpy(username2, userFirstName);
    strncat(username2, userLastName, 1);
    
    strncpy(username3, userFirstName, 2);
    strcat(username3, "_");
    strcat(username3, userLastName);
    
    cout << endl << "Recomended username: " << endl
        << username1 << endl 
        << username2 << endl
        << username3 << endl;
    
}
