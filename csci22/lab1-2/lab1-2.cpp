// Jordan Wright
// Lab 1.2
// 1/26/17

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    
    ifstream input_file;
    int array1[10];
    int array2[10];
    int i = 0, j = 0;
    bool has_equal = false;
    bool array1_equals = false;
    bool array2_equals = false;
    int array1_size = 0, array2_size = 0;
    
    
    input_file.open("input.txt");
    
    if(!input_file.is_open()){
        cout << "Error opening the file.";
    }
    
    while(!input_file.eof()){
    
        for (i = 0; i < 10; i++){
            array1[i] = 0;
            array2[i] = 0;
        }
        
        cout << endl;
        for(i = 0; i < 10; i++){
    
            input_file >> array1[i];
            cout << array1[i] << " ";
            array1_size = i + 1;
            if(input_file.get() == '\n'){
                break;
            }
        }
        
        cout << endl;
        
        for(i = 0; i < 10; i++){
            
            input_file >> array2[i];
            cout << array2[i] << " ";
            array2_size = i + 1;
            if(input_file.get() == '\n'){
                break;
            }
        }
        
        i = 0;
        for (i; i < 10; i++){
            has_equal = false;
            for(j = 0; j < 10; j++){
                if (array1[i] == array2[j]){
                    has_equal = true;
                }
            }
            if(has_equal == false){
                break;
            }
        }
        if (has_equal == true){
            array1_equals = true;
        }
        
        i = 0;
        for (i; i < 10; i++){
            has_equal = false;
            for(j = 0; j < 10; j++){
                if (array2[i] == array1[j]){
                    has_equal = true;
                }
            }
            if(has_equal == false){
                break;
            }
        }
        if (has_equal == true){
            array2_equals = true;
        }
        
        //Check if sets are equal
        if(array1_equals == true && array2_equals == true){
            cout << endl << "These sets are equal." << endl;
        }
        else {
            cout << endl << "These sets are not equal." << endl;
    
        }
        
        //Check for subsets
        if (array2_equals == true && array1_size >= array2_size){
            cout << "Array 2 is a subset of array 1." << endl;
        }
        if (array1_equals == true && array2_size >= array1_size){
            cout << "Array 1 is a subset of array 2." << endl;
        }
        if (array2_equals == true && array1_size > array2_size){
            cout << "Array 2 is a proper subset of array 1." << endl;
        }
        if (array1_equals == true && array2_size > array1_size){
            cout << "Array 1 is a proper subset of array 2." << endl;
        }
        if (array1_equals == false && array2_equals == false){
            cout << "These sets are not subsets." << endl;
        }
    }
    input_file.close();
}