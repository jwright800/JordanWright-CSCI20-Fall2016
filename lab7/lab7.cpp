/* 
    Jordan Wright
    9/15/16
    This programs uses functions to display a song and parameters to distiguish between verses.
*/

#include <iostream> 
#include <string>
using namespace std;

void Chorus(int chorusValue = 1)
{
    if (chorusValue == 1){
        cout << "Blackbird fly" << endl << "Blackbird fly" << endl << "Into the light of the dark black night" << endl << endl;
    }
    else{
        cout << "You were only waiting for this moment to arise." << endl;
        cout << "You were only waiting for this moment to arise." << endl;
        cout << "You were only waiting for this moment to arise." << endl << endl;
    }
    
    return;
}

void Verse(int verseValue = 1)
{
    if (verseValue == 1){
        cout << "Blackbird singing in the dead of night" << endl;
        cout << "Take these broken wings and learn to fly" << endl;
        cout << "All your life" << endl;
        cout << "You were only waiting for this moment to arise" << endl << endl;
    }
    
    else if (verseValue == 2){
        cout << "Blackbird singing in the dead of night" << endl;
        cout << "Take these sunken eyes and learn to see" << endl;
        cout << "All your life" << endl;
        cout << "You were only waiting for this moment to be free" << endl << endl;
    }
    
    else {
        cout << "Blackbird singing in the dead of night" << endl;
        cout << "Take these broken wings and learn to fly" << endl;
        cout << "All your life" << endl;
    }
    
    
    return;
}

int main()
{
    cout << "Blackbird - The Beatles" << endl << endl;
    
    Verse(1);
    Verse(2);    
    
    Chorus(1);  
    Chorus(1);

    Verse(3);    
    Chorus(2);
    
    return 0;
}