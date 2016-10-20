/* 
    Jordan Wright
    created: 10/13/16
    last edit: 10/20/16
    
    This program has the user choose two numbers to guess between. It generates a random number between the two
    and makes the user guess. If the guess is too high or low it will inform the user and increase the score by one
    until the user gets the the correct number.
*/

#include <iostream>
#include <cmath>
#include <cstdlib> 
#include <ctime>
using namespace std;

class GameInfo{
    public:
        GameInfo(); //constructor
        
        void ChangeUserScore();
        int GetUserScore() const;
    
    private:
        int score;
    
};

GameInfo::GameInfo(){
    score = 1;
    return;
}

void GameInfo::ChangeUserScore(){
    ++score;
    return;
}

int GameInfo::GetUserScore() const{
    return score;
}

int main(){
    
    
    GameInfo player;
    srand(time(0));
    int randOne, randTwo, randNum;
    int userGuess = 0;
    int randScale;
    
    cout << "Enter two numbers to guess between: " << endl;
    cin >> randOne;
    cin >> randTwo;
    randScale = fabs(randOne - randTwo);
    randNum = rand() % randScale;
    if(randOne > randTwo){
        randNum = randNum + randTwo;
    }
    else {
        randNum = randNum + randOne;
    }
    
    while(userGuess != randNum){
        
        cout << "Enter your guess: ";
        cin >> userGuess;
        if(userGuess == randNum){
            cout << endl << "The number was " << randNum << "." << endl
                 << "You win! It took you: " <<  player. GetUserScore() << " guesses.";
        }
        else{
            if (userGuess > randNum){
                cout << "Too high." << endl << endl;
            }
            else{
                cout << "Too low." << endl << endl;
            }
            player.ChangeUserScore();
        }
        
    }
    
    
    
    return 0;
}