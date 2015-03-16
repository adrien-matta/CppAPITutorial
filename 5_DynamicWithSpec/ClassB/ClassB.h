#ifndef _ClassB_
#define _ClassB_
#include "Base.h"

class ClassB : public Base{
  private:
    ClassB();
  public:
    ~ClassB();

  public: // inherited from class Base
    void Method1();
    void Method2();

  public: // Specific to class B
    void Method3();

    static Base* Construct();
    enum {ID =2};
};
#endif
