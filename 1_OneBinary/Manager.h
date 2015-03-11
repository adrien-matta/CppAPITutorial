#ifndef _Manager_
#define _Manager_
#include"Base.h"
#include <vector>
using namespace std;

class Manager{
  public:
    Manager();
    ~Manager();

   private:
    vector<Base*> m_stuff;

   public:
    void Add(Base*);
    void Method1();
    void Method2();

};
#endif
