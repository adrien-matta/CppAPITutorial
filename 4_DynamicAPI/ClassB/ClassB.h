#ifndef _ClassB_
#define _ClassB_
#include "Base.h"

class ClassB : public Base{
  private:
    ClassB();
  public:
    ~ClassB();
   
  public:
  void Method1();
  void Method2();

  static Base* Construct();
  enum {ID =2};
};
#endif
