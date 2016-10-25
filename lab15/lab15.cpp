/* 
    Jordan Wright
    10/25/16
    This program asks the user to select an item. The selected item is then incremented and the user is asked if they would like to make another selection.
    The user can make selections until they decide they are done.
*/


 #include <iostream>
 #include <string>
 using namespace std; 
 
 int main(){
     
     int menuStock[10] = {0};
     string menuItem[10] = {"item0", "item1", "item2", "item3", "item4", "item5", "item6", "item7", "item8", "item9"}; 
     char loopCheck;
     int item;
     int i = 0;
     
     while (loopCheck != 'n'){
  
         for(i = 0; i < 10; ++i){
             cout << "[" << i << "] " << menuItem[i] << ": " << menuStock[i] << endl; 
         }
        
        cout << endl << "Select an item: " << endl;
        cin >> item;
        ++menuStock[item];
        
        cout << "Would you like to select another? (Y/N): ";
        cin >> loopCheck;
        if (loopCheck == 'N'){ //changes for loop condition check
            loopCheck = 'n';
        }
        cout << endl;
         
     }
     for(i = 0; i < 10; ++i){
             cout << "[" << i << "] " << menuItem[i] << ": " << menuStock[i] << endl; 
         }
     
 }
 