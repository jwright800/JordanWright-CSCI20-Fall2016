//Jordan Wright
//Lab 1.1

#include <iostream>
using namespace std;

int main(){
    
    int array1[51] = {0};
    int array2[51] = {0};
    int array3[51] = {0};
    int i = 0; 
    int j = 0;
    int numCheck = 0;
    
    //Create arrays
    
    for(i = 0; i <= 50; ++i){
        numCheck = i % 3;
        if (numCheck == 0){
            array1[j] = i;
            j++;
        }
    }
    j = 0;
    for(i = 0; i <= 50; ++i){
        numCheck = i % 3;
        if (numCheck != 0){
            array2[j] = i;
            j++;
        }
    }
    j = 0;
    for(i = 0; i <= 50; ++i){
        numCheck = i % 3;
        if (numCheck != 0){
            numCheck = i % 2;
            if (numCheck != 0){
                array3[j] = i;
                j++;
            }
        }
    }
    
    
    //Print
    
    for(i = 0; i <= 50; ++i){
        cout << array1[i] << " ";
    }
    
    cout << endl;
    
    for(i = 0; i <= 50; ++i){
        cout << array2[i] << " ";
    }
    
    cout << endl;
    
    for(i = 0; i <= 50; ++i){
        cout << array3[i] << " ";
    }
    
}