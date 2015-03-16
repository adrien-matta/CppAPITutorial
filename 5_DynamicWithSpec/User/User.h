#ifndef _USER_
#define _USER_
#include<iostream>

class User{
  public:
    User();
    ~User();

   public:
    void Function();
};

namespace{
class proxy{
  public:
    proxy(){
      std::cout << "Loading libUser" << std::endl;
    }

};

proxy p;
}
extern "C"
{
    User* constructUser(){
      std::cout << "Call User Constructor " << std::endl;
      return new User();
    
    };
    void releaseUser(User* u){
      std::cout << "Call User Destructor" << std::endl;
      delete u;
    };

    void functionUser(User* u ){
      std::cout << "Call User Function " << std::endl;
      u->Function();
    }
}
#endif


