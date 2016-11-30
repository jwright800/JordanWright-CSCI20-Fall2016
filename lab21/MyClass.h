#ifndef MYCLASS_H
#define MYCLASS_H

class MyClass {
 public:
  /*
   * Constructor
   * Initialize our member variable num_ to 0
   */
  MyClass();
  /*
   * Output our member variable using cout
   */
  void Output();
 private:
  int num_;
};

#endif