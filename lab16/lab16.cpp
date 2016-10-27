/* 
    Jordan Wright
    10/27/16
    This program asks the user to select an item. The selected item is then incremented and the user is asked if they would like to make another selection.
    The user can make selections until they decide they are done.
*/


 #include <iostream>
 #include <string>
 using namespace std; 
 
 int main(){
     
     int menuStock[10] = {10, 10, 10, 10, 10, 10, 10, 10, 10, 10};
     string menuItem[10] = {"item0", "item1", "item2", "item3", "item4", "item5", "item6", "item7", "item8", "item9"}; 
     float menuPrices[10] = {2.50, 0.50, 0.40, 1.00, 0.75, 3.00, 1.20, 0.80, 0.25, 1.75};
     char loopCheck;
     int item;
     float total = 0;
     int i = 0;
     
     while (loopCheck != 'n'){
  
         for(i = 0; i < 10; ++i){
             cout << "[" << i << "] " << menuItem[i] << " : "<< menuStock[i] <<  " : $" << menuPrices[i] <<endl; 
         }
        
        cout << endl << "Select an item: " << endl;
        cin >> item;
        --menuStock[item];
        total = total + menuPrices[item];
        
        cout << menuItem[item] << " costs: $" << menuPrices[item] << endl;
        cout << "Your new total is: $" << total << endl;
        
        cout << endl << "Would you like to select another? (Y/N): ";
        cin >> loopCheck;
        if (loopCheck == 'N'){ //changes for loop condition check
            loopCheck = 'n';
        }
        cout << endl;
         
     }
     cout << "Grand Total: $" << total << endl;
     
 }