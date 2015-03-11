#include"Manager.h"
#include"Base.h"
#include"Factory.h"
#include <dlfcn.h>
#include <iostream>

static Factory* the_factory= Factory::getInstance();

int main(int argc, char** argv){

  Manager myManager;
  std::cout << "Instantiate Object of type Class A" << std::endl;  
  Base* a = the_factory->Construct("ClassA");
  std::cout << "Instantiate Object of type Class B" << std::endl; 
  Base* b = the_factory->Construct("ClassB");

  myManager.Add(a);
  myManager.Add(b);

  myManager.Method1();
  myManager.Method2();

  std::cout << "Instantiate Object of type Class C" << std::endl; 
  Base* c = the_factory->Construct("ClassC");
  return 0;
}
