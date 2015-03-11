#ifndef _FACTORY_
#define _FACTORY_
#include"Base.h"
#include<map>
#include<string>

typedef Base* (*ClassFactoryFn)();

class Factory{
  private:
      Factory();
      ~Factory();

  public:
      static Factory* getInstance();
      Base* Construct(std::string Name);
      void Add(std::string Name, ClassFactoryFn fn);
       

  private:
      static Factory* m_Instance;

      std::map<std::string,ClassFactoryFn> m_Construct;
};

#endif
