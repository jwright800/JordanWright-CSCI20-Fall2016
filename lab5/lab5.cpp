/*
    Jordan Wright
    9/6/16
    
*/

#include <iostream>
#include <string>
using namespace std;

struct Monster_Type {
    string monster_name;
    int head;
    int eyes;
    int ears;
    int nose;
    int mouth;
};

int main() 
{
    Monster_Type monster1;
    Monster_Type monster2;
    Monster_Type monster3;
    Monster_Type monster4;
    Monster_Type monster5;
    
    
    cout << "What would you like to name your monster? " << endl;
    getline (cin, monster1.monster_name);
    
    cout << "What head type does your monster have? (1. Zombus 2. Franken 3. Happy): " << endl;
    cin >> monster1.head;
    
    cout << "What eyes type does your monster have? (1. Vegitas 2. Wackus 3. Spritum): " << endl;
    cin >> monster1.eyes;
    
    cout << "What ears type does your monster have? (1. Vegitas 2. Wackus 3. Spritum): " << endl;
    cin >> monster1.ears;
    
    cout << "What nose type does your monster have? (1. Vegitas 2. Wackus 3. Spritum): " << endl;
    cin >> monster1.nose;
    
    cout << "What mouth type does your monster have? (1. Vegitas 2. Wackus 3. Spritum): " << endl;
    cin >> monster1.mouth;
        
    monster2.monster_name = "monster2"; monster2.head = 1; monster2.eyes = 1; monster2.ears = 1; monster2.nose = 1; monster2.mouth = 1;
    monster3.monster_name = "monster3"; monster3.head = 2; monster3.eyes = 2; monster3.ears = 2; monster3.nose = 2; monster3.mouth = 2;
    monster4.monster_name = "monster4"; monster4.head = 3; monster4.eyes = 3; monster4.ears = 3; monster4.nose = 3; monster4.mouth = 3;
    monster5.monster_name = "monster5"; monster5.head = 1; monster5.eyes = 2; monster5.ears = 3; monster5.nose = 1; monster5.mouth = 2;
    
    cout << monster1.monster_name << ": " << monster1.head << ", " << monster1.eyes << ", " << monster1.ears << ", "
         << monster1.nose << ", " << monster1.mouth << "." << endl;
    
    cout << monster2.monster_name << ": " << monster2.head << ", " << monster2.eyes << ", " << monster2.ears << ", "
         << monster2.nose << ", " << monster2.mouth << "." << endl;
    
    cout << monster3.monster_name << ": " << monster3.head << ", " << monster3.eyes << ", " << monster3.ears << ", "
         << monster3.nose << ", " << monster3.mouth << "." << endl;
    
    cout << monster4.monster_name << ": " << monster4.head << ", " << monster4.eyes << ", " << monster4.ears << ", "
         << monster4.nose << ", " << monster4.mouth << "." << endl;
    
    cout << monster5.monster_name << ": " << monster5.head << ", " << monster5.eyes << ", " << monster5.ears << ", "
         << monster5.nose << ", " << monster5.mouth << "." << endl;
    
}
