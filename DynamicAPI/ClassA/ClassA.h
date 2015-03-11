#ifndef _ClassA_
#define _ClassA_
#include "Base.h"

class ClassA : public Base{
  private:
    ClassA();
 
  public:
    ~ClassA();
   
  public:
  void Method1();

  static Base* Construct();
  enum{ ID = 1 };

};
#endif
