/* 
    Jordan Wright
    8/30/16
    A mad libs game that get's user input and out puts a paragragh.
*/

#include <iostream> 
#include <string>
using namespace std;

int main()
{
    int number;
    float number2;
    char character;
    string dessert;
    
    cout << "Enter a number between 2 an 50." << endl;
    cin >> number;
    cout << endl << "Enter another number between 5 and 6" << endl;
    cin >> number2;
    cout << endl << "Enter a character." << endl;
    cin >> character;
    cout << endl << "Enter the name of a dessert" << endl;
    cin >> dessert;
    
    cout << endl << "Number 1: " << number << endl;
    cout << "Number 2: " << number2 << endl;
    cout << "Character: " << character << endl;
    cout << "Dessert: " << dessert << endl;
    
    cout << endl << "Johnny knew he couldn't stay awake forever. It'd had been a whole "
         << number << " hours since he last slept.";
    cout << " Last time he counted " << number2 << " aliens. I'm not even sure that's possible.";
    cout << " Last time their leader, he called himself Mr." << character << ", said they came from planet "
         << dessert << ".";


}