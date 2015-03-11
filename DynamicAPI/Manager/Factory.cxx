#include"Factory.h"
#include <dlfcn.h>

Factory* Factory::m_Instance = 0;

////////////////////////////////////////////////////////////////////////////////
Factory::Factory(){

}

/////////////////////////////////////////////////////////////////////////////////
Factory::~Factory(){
  if(m_Instance!=0)
    delete m_Instance;

  m_Instance = 0 ;
}

////////////////////////////////////////////////////////////////////////////////
Factory* Factory::getInstance(){
  if(!m_Instance){
    m_Instance = new Factory();
  }

  return m_Instance;

}

////////////////////////////////////////////////////////////////////////////////
Base* Factory::Construct(std::string Name){
  std::map<std::string,ClassFactoryFn>::iterator it;
  
  if(m_Construct.find(Name)!=m_Construct.end())
    return  m_Construct[Name]();

  else{
    std::string libName = "lib"+Name+".dylib";
    dlopen(libName.c_str(),RTLD_NOW);
    
    if(m_Construct.find(Name)!=m_Construct.end())
      return  m_Construct[Name]();
  
    else{
      std::cout << "Class " << Name << " does not exist" << std::endl;
      exit(1);
    }
  }

  return NULL;
}

////////////////////////////////////////////////////////////////////////////////
void Factory::Add(std::string Name, ClassFactoryFn fn){
  m_Construct[Name] = fn;
}
