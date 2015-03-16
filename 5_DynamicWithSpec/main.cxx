#include"User.h"
#include <iostream>
#include <string>
#include <dlfcn.h>

#ifdef __linux__
std::string SO_EXT = ".so";
#endif

#ifdef __FreeBSD__
std::string SO_EXT = ".so";
#endif

#ifdef __APPLE__
std::string SO_EXT = ".dylib";
#endif

int main(int argc, char** argv){
  std::string libName = "libUser"+SO_EXT;
  void* handle = dlopen(libName.c_str(),RTLD_LAZY);
  char* error;

  User* (*UserConstructor)() = (User* (*)()) dlsym(handle, "constructUser");
  if ((error = dlerror()) != NULL)  {
            fputs(error, stderr);
            std::cout << std::endl;
            exit(1);
  } 
  
  User* (*UserFunction)(User*) = (User* (*)(User*)) dlsym(handle, "functionUser");
 if ((error = dlerror()) != NULL)  {
            fputs(error, stderr);
            std::cout << std::endl;
            exit(1);
  } 
  
  (*UserFunction)( (*UserConstructor)());

  return 0;
}
