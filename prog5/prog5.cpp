/*
    Jordan Wright
    Created: 12/5/16
    Last update: 12/10/16
    
    This program is a recreation of the game Hangman. It gets words from files it reads in or user input. 
    Based on word length the user can select a difficulty level. The word is displayed censored and characters
    are revealed if the user makes a correct guess. If the user makes an incorrect guess they gain a body part
    that is displayed and the letter is added to a list of guessed letters that will also be displayed for reference.
*/

#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <cstdlib> 
#include <ctime>
#include <cctype>
#include <cmath>
using namespace std;

class FileInput {
    
    public:
        FileInput();
        void SetFile(string inputFile);
        void TransferWords();
        void CloseFile();
        string GetRandWord();
    
    private:
        string fileName;
        string wordArray[100];
        ifstream txtFile;
        int wordCount = 0;
        int fileSize;
};

FileInput::FileInput(){
    fileName = "default.txt";
}

void FileInput::SetFile(string inputFile){
    fileName = inputFile;
}


void FileInput::TransferWords(){
    int i = 0;
    int j = 0;
    
    txtFile.open(fileName);
    
    if(!txtFile.is_open()){
        cout << "Error opening the file.";
    }
    else{
        while(!txtFile.eof()){
             txtFile >> wordArray[i];
             ++i;
             
        }
    }       
    fileSize = i;
    for(i = 0; i < 100; ++i){
        
        for (j = 0; j < wordArray[i].size(); ++j){
            if(isalpha(wordArray[i].at(j)) == 0){
                wordArray[i].erase(j);
            }
        }
    }
    return;
}

void FileInput::CloseFile(){
    txtFile.close();
}

string FileInput::GetRandWord(){
    int randNum;
    srand(time(0));
    randNum = rand() % fileSize;
    return wordArray[randNum];
    
}

void PrintHang(int errors){
    
    if(errors <= 0){
        cout << "  ___     " << endl;
        cout << " |   |    " << endl;
        cout << " |        " << endl;
        cout << " |        " << endl;
        cout << "_|_       " << endl;
    }
    else if(errors == 1){
        cout << "  ___     " << endl;
        cout << " |   |    " << endl;
        cout << " |   0    " << endl;
        cout << " |        " << endl;
        cout << "_|_       " << endl;
    }
    else if(errors == 2){
        cout << "  ___     " << endl;
        cout << " |   |    " << endl;
        cout << " |   0    " << endl;
        cout << " |   |    " << endl;
        cout << "_|_       " << endl;
    }
    else if(errors == 3){
        cout << "  ___     " << endl;
        cout << " |   |    " << endl;
        cout << " |   0    " << endl;
        cout << " |   |-   " << endl;
        cout << "_|_       " << endl;
    }
    else if(errors == 4){
        cout << "  ___     " << endl;
        cout << " |   |    " << endl;
        cout << " |   0    " << endl;
        cout << " |  -|-   " << endl;
        cout << "_|_       " << endl;
    }
    else if(errors == 5){
        cout << "  ___     " << endl;
        cout << " |   |    " << endl;
        cout << " |   0    " << endl;
        cout << " |  -|-   " << endl;
        cout << "_|_ /     " << endl;
    }
    else if(errors == 6){
        cout << "  ___     " << endl;
        cout << " |   |    " << endl;
        cout << " |   0    " << endl;
        cout << " |  -|-   " << endl;
        cout << "_|_ / \\  " << endl;
    }
}

void SkipLines(){
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
}

int main(){
    
    string inputFile;
    string targetWord;
    string targetWordGuess;
    char userGuess;
    int userMisses = 0;
    bool letterExists = false;
    int menuOption;
    int difLevel;
    int repeat = 1;
    char missedChar[30];
    int i = 0;
    
    //Title
    
    while(repeat == 1){
        userMisses = 0;
        inputFile = "default.txt";
        
        for(i = 0; i < 30; i++){
            missedChar[i] = '\0';
        }
        
        SkipLines();
        cout << "                      __                          " << endl;
        cout << "|    |   /\\   |\\  |  /  \\   |\\  /|    /\\   |\\  |" << endl;
        cout << "|____|  /__\\  | \\ | |  __   | \\/ |   /__\\  | \\ |"  << endl;
        cout << "|    | /    \\ |  \\|  \\__/   |    |  /    \\ |  \\|"<< endl << endl;
        
        
        cout << "[1] Enter a word file." << endl << "[2] Enter a word." << endl << "[3] Use default file." << endl;
        cout << endl << "What would you like to do?: "; 
        cin >> menuOption;
        
        //Get Word
        
        if(menuOption == 1 || menuOption == 3){
            if(menuOption == 1){
                cout << "Enter a file name: ";
                cin >> inputFile;
            }
            FileInput file1;
            file1.SetFile(inputFile);
            file1.TransferWords();
            cout << endl << "[1] Easy" << endl << "[2] Normal" << endl << "[3] Hard" << endl << "[4] No Preference" << endl;
            cout << endl << "Select a difficulty: ";
            cin >> difLevel;
            if (difLevel == 1){
                do{
                targetWord = file1.GetRandWord();
                } while (targetWord.size() > 4);
            }
            else if (difLevel == 2){
                do{
                targetWord = file1.GetRandWord();
                } while (targetWord.size() <= 4 || targetWord.size() > 7);
                
            }
            else if (difLevel == 3){
                do{
                targetWord = file1.GetRandWord();
                } while (targetWord.size() <= 7);
                
            }
            else{
                targetWord = file1.GetRandWord();
            }
            file1.CloseFile();
        }
        else if(menuOption == 2){
            cout << "Enter your word: ";
            cin >> targetWord;
        }
        
        for(i = 0; i < targetWord.size(); i++){
            if (isupper(targetWord.at(i)) != 0){
                targetWord[i] = tolower(targetWord[i]);
            }
        }
        
        //Hangman
        
        targetWordGuess = targetWord;
        for(i = 0; i < targetWord.size(); i++){ 
            targetWordGuess.replace(i, 1, "*");
        }
        
        while(targetWordGuess != targetWord && userMisses < 6){ 
            SkipLines();
            cout << endl << "\t" << targetWordGuess << endl; 
            PrintHang(userMisses);
            cout << endl << "  Used Letters: ";
            for(i = 0; i < userMisses; i++){
                cout << missedChar[i] << " ";
            }
            cout << endl << "Enter a letter: ";
            cin >> userGuess;
            if (isupper(userGuess) != 0){
                userGuess = tolower(userGuess);
            }
            
            for(i = 0; i < targetWord.size(); i++){ // Checks if letter exists within word
                if(userGuess == targetWord.at(i)){
                    targetWordGuess.at(i) = userGuess;
                    letterExists = true;
                }
            }
            if(letterExists == false){
                missedChar[userMisses] = userGuess;
                userMisses++;
            }
            letterExists = false;
        }
        SkipLines();
        if (targetWord == targetWordGuess){
            PrintHang(userMisses);
            cout << endl << "The word was " << targetWord << ". You win!";
        }
        
        else {
            
            cout << "Sorry! The correct word was " << targetWord << "." << endl;
            PrintHang(userMisses);
        }
        
        cout << endl << endl << "[1] Yes" << endl << "[2] No";
        cout << endl << "Would You like to play again?: ";
        cin >> repeat;
    }
    
}