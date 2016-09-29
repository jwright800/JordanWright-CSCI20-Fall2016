/* 
    Jordan Wright
    9/22/16
    This program has a class that converts temperatures to kelvin, celsius and farenheit.
*/

#include <iostream> 
using namespace std;

void TestFunc(int test){
    if (test == 1){
        cout << endl << "TRUE" << endl << endl;
    }
    else {
        cout << endl << "FALSE" << endl << endl;
    }
    return;
}

int main(){
    
    int testVar;
    
    int suzyAge = 25; // #1
    int johnAge = 21;
    cout << "(suzyAge < johnAge)";
    testVar = (suzyAge < johnAge);
    TestFunc(testVar);
    
    int x =7; //#2
    int y = 7;
    cout<< "(x >= y)";
    testVar = (x >= y);
    TestFunc(testVar);
    
    int a = 1; //3
    int b = 9;
    cout<< "(a == b)";
    testVar = (a == b);
    TestFunc(testVar);
    
    int limit = 20; //4
    int count = 10;
    cout<< "((limit*count)/2 > 0)";
    testVar = ((limit*count)/2 > 0);
    TestFunc(testVar);
    
    int t = -4; //5
    int z = 0;
    cout<< "(t > 5 || z < 2)";
    testVar = (t > 5 || z < 2);
    TestFunc(testVar);
    
    
    int variable = -5; //6
    cout<< "(!(variable >0))";
    testVar = (!(variable >0));
    TestFunc(testVar);
    
    a = 16; //7
    cout<< "(a/4 < 8 && a >= 4)";
    testVar = (a/4 < 8 && a >= 4);
    TestFunc(testVar);
    
    x = -2;     //8
    y = 5;
    cout<< "(x*y < 10 || y*z < 10)";
    testVar = (x*y < 10 || y*z < 10);
    TestFunc(testVar);
    
    int j = -2; //9
    int k = 5;
    int l = 4;
    cout<< "(!(j*l < 10) || y/x * 4 < y *2)";
    testVar = (!(j*l < 10) || y/x * 4 < y *2);
    TestFunc(testVar);
    
    
    return 0;
}