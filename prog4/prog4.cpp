/*
    Jordan Wright
    Created: 11/8/16
    Last update: 11/10/16
    This program gets a text file from the user and determines unique words, number of occurences and the position of the first occurence.
*/

#include <iostream>
#include <string>
#include <sstream>
#include <ios>
#include <iomanip>
#include <fstream>
using namespace std;

int main(){
    
    string fileName;
    string wordFile[100];
    int wordPos[100];
    int wordOccur[100] = {0};
    int maxSize = 0;
    int i = 0;
    int j = 0;
    
    cout << "Enter the file you would like to analyze: ";
    cin >> fileName;
    
    ifstream txtFile;
    txtFile.open(fileName);
    
    ofstream outFile;
    outFile.open("output.txt");
    
    if(!txtFile.is_open()){
        cout << "no";
    }
    else{
        while(!txtFile.eof()){
             txtFile >> wordFile[i];
             ++i;
        }
    }       
        for(i = 0; i < 100; ++i){
            
            for (j = 0; j < wordFile[i].size(); ++j){
                if(wordFile[i].at(j) == ',' || wordFile[i].at(j) == '.'){
                    wordFile[i].erase(j);
                }
            }
            if (wordFile[i].size() < 3){
                wordFile[i].clear();
            }
    }
    
    //count occurence
    i = 0;
    for(i; i < 100; ++i){
        for(j = 0; j < 100; ++j){
            
            if(wordFile[i] == wordFile[j]){
                ++wordOccur[i];
            }
            if(wordFile[i] == wordFile[j] && wordOccur[j] > 1){
                wordFile[i].clear();
            }
        
        }
        wordPos[i] = i;
        if(wordFile[i].size() > maxSize){
            maxSize = wordFile[i].size();
        }
    }
    
    //print 
    outFile << setw(maxSize) << left << "   Word" << " | " << "Occurrence #" << " | " << "Position of First Occurrence" << endl;
    cout << setw(maxSize) << left << "   Word" << " | " << "Occurrence #" << " | " << "Position of First Occurrence" << endl;
    
    
    for(i = 0; i < 100; ++i){
        
        if(wordFile[i].size() > 0){    
            cout << setfill(' ') << setw(maxSize) << left << wordFile[i] << " | " << wordOccur[i] << setw(14) << right << " | " << wordPos[i] + 1 << endl;
            outFile << setfill(' ') << setw(maxSize) << left << wordFile[i] << " | " << wordOccur[i] << setw(14) << right << " | " << wordPos[i] + 1 << endl;
        }
    }

    txtFile.close();
    outFile.close();
    return 0;
}

