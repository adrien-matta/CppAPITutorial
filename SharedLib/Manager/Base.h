#ifndef _BASE_
#define _BASE_
class Base{
  public:
    Base();
    ~Base();

  public:
    virtual void Method1() {};
    virtual void Method2() = 0;

};
#endif
