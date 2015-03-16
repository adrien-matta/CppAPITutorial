#include "User.h"
#include"Manager.h"
#include"ClassB.h"
#include"Factory.h"
#include<iostream>
static Factory* the_factory= Factory::getInstance();

User::User(){
  std::cout << "Construct User" << std::endl;
}

User::~User(){
  std::cout << "Destruct User" << std::endl;

}


void User::Function(){
  std::cout << "User Function" << std::endl;
  Manager myManager;
  std::cout << "Instantiate Object of type Class A" << std::endl;  
  Base* a = the_factory->Construct("ClassA");
  std::cout << "Instantiate Object of type Class B" << std::endl; 
  Base* b =  the_factory->Construct("ClassB");

  myManager.Add(a);
  myManager.Add(b);

  myManager.Method1();
  myManager.Method2();

  ((ClassB*) b)->Method3();

  std::cout << "Instantiate Object of type Class C" << std::endl; 
  Base* c = the_factory->Construct("ClassC");
}

