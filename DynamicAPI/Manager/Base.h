#ifndef _BASE_
#define _BASE_
#include<iostream>

class Base{
  protected:
    Base();
  public:
    ~Base();

  public:
    virtual void Method1() = 0; 
    virtual void Method2() {std::cout << "Base Class: Method 2" << std::endl;};

};
#endif
