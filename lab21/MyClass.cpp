#include <iostream>
#include <cstdlib>
#include <ctime>
#include "MyClass.h"
using namespace std;


MyClass::MyClass() : num_(0) {}

void MyClass::Output() {
  cout << "My number is: " << num_ << endl;
}

