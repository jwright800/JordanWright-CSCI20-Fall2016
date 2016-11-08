/*
    Jordan Wright
    11/7/16
    This program reads in an array from a .txt file. It then calculates the sum of each row and column and average of the entire array.
    It outputs the array into another .txt file, aligning each row and column with their respective sum.
*/

#include <iostream>
#include <ios>
#include <iomanip>
#include <fstream>
using namespace std;

int main(){
    
    int inputArray[3][4] = {0};
    int sumRows[3] = {0};
    int sumCols[4] = {0};
    double arrayAvg;
    int i = 0;
    int j = 0;
    
    ifstream inFS;
    ofstream outFS;
    inFS.open("lab19.txt");
    outFS.open("output.txt");
    
    
    //fill array
    for(i; i < 3; ++i){
        for(j = 0; j < 4; ++j){
            inFS >> inputArray[i][j];
            sumRows[i] = sumRows[i] + inputArray[i][j];
            sumCols[j] = sumCols[j] + inputArray[i][j];
        }
    }
    inFS.close();
    
    arrayAvg = (sumRows[0] + sumRows[1] + sumRows[2]) / 12.0;
    
    //output
    i = 0;
    for(i; i < 3; ++i){
        for(j = 0; j < 4; ++j){
        
            outFS << setfill(' ') << setw(3) << right << inputArray[i][j];
            
            
        }
        outFS << setfill(' ') << setw(3) << right << sumRows[i] << endl;
    }
    for(j = 0; j < 4; ++j){
        outFS << setfill(' ') << setw(3) << right << sumCols[j];
    }
    outFS << endl << "Array average: " << arrayAvg;
    
    outFS.close();
    
    return 0;
}