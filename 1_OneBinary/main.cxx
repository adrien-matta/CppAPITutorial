#include"Manager.h"
#include"Base.h"
#include"ClassA.h"
#include"ClassB.h"

int main(int argc, char** argv){

  Manager myManager;
  Base* a = (Base*) new ClassA();
  Base* b = (Base*) new ClassB();

  myManager.Add(a);
  myManager.Add(b);

  myManager.Method1();
  myManager.Method2();


  return 0;
}
