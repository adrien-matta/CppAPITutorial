#include "Manager.h"

///////////////////////////////////////////////////////////////////////////////
Manager::Manager(){

}

///////////////////////////////////////////////////////////////////////////////
Manager::~Manager(){

}

void Manager::Add(Base* stuff){
  m_stuff.push_back(stuff);
}

///////////////////////////////////////////////////////////////////////////////
void Manager::Method1(){
  size_t mysize = m_stuff.size();
  for(size_t i = 0 ; i < mysize ; i++){
    m_stuff[i]->Method1();
  }
}

///////////////////////////////////////////////////////////////////////////////
void Manager::Method2(){
  size_t mysize = m_stuff.size();
  for(size_t i = 0 ; i < mysize ; i++){
    m_stuff[i]->Method2();
  }

}
