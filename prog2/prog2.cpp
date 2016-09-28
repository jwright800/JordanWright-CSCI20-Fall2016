/* 
    Jordan Wright
    9/27/16
    This program has a class that converts weights on different planets.
*/

#include <iostream>
using namespace std;

class WeightConverter {
    public:
        WeightConverter();                      // constructors
        WeightConverter(double iniEarthWeight);
        
        void SetWeightFromEarth(double setEarthWeight); // mutators
        void SetWeightFromMoon(double moonWeight);
        void SetWeightFromMars(double marsWeight);
        void SetWeightFromJupiter(double jupWeight);
        
        double GetWeightAsEarth() const; // accessors
        double GetWeightAsMoon() const;
        double GetWeightAsMars() const;
        double GetWeightAsJupiter() const;
        
        void PrintWeights() const;
    
    private:
        double earthWeight;
};

WeightConverter::WeightConverter(){ // Default Constructor
    
    earthWeight = 0;
    return;
}

WeightConverter::WeightConverter(double iniWeight){
    earthWeight = iniWeight;
    return;
}

void WeightConverter::SetWeightFromEarth(double setEarthWeight){
    earthWeight = setEarthWeight;
    return;
}

void WeightConverter::SetWeightFromMoon(double moonWeight){
    earthWeight = moonWeight / .165;
    return;
}

void WeightConverter::SetWeightFromMars(double marsWeight){
    earthWeight = marsWeight / .377;
    return;
}

void WeightConverter::SetWeightFromJupiter(double jupWeight){
    earthWeight = jupWeight / 2.364;
    return;
}

double WeightConverter::GetWeightAsEarth() const{
    return earthWeight;
}

double WeightConverter::GetWeightAsMoon() const{
    return earthWeight * .165;
}

double WeightConverter::GetWeightAsMars() const{
    return earthWeight * .377;
}

double WeightConverter::GetWeightAsJupiter() const{
    return earthWeight * 2.364;
}

void WeightConverter::PrintWeights() const{
    cout << "Weight on Earth:   " << GetWeightAsEarth() << " lbs" << endl;
    cout << "Weight on Moon:    " << GetWeightAsMoon() << " lbs" << endl;
    cout << "Weight on Mars:    " << GetWeightAsMars() << " lbs" << endl;
    cout << "Weight on Jupiter: " << GetWeightAsJupiter() << " lbs" << endl << endl;
}

int main(){
    
    WeightConverter weight1;    
    weight1.PrintWeights();     // Testing Default Constructor
    
    WeightConverter weight2(100); //Testing Second Constructor
    weight2.PrintWeights();
    
    weight1.SetWeightFromEarth(100);    //Test 1
    weight1.PrintWeights();
    
    weight1.SetWeightFromMoon(100);     //Test 2
    weight1.PrintWeights();
    
    weight1.SetWeightFromMars(100);     //Test 3
    weight1.PrintWeights();
    
    weight1.SetWeightFromJupiter(100);  //Test 4
    weight1.PrintWeights();
    
    weight1.SetWeightFromMars(28);      //Test 5
    weight1.PrintWeights();
    
    weight1.SetWeightFromJupiter(35);   //Test 6
    weight1.PrintWeights();
    
    weight1.SetWeightFromMars(300);     //Test 7
    weight1.PrintWeights();
    
    weight1.SetWeightFromMoon(156);     //Test 8
    weight1.PrintWeights();
    
    return 0;
}