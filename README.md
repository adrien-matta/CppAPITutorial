# CppAPITutorial
A minimalist tutorial showing how to code a simple API with dynamic memory load. Nothing here is ground breaking, it is just a small exercise I did after reading a couple of article about this. The idea was to create the simplest example possible, it may not be the most effective approach, but I found it to be very readable for beginners.

# Scope
The repository contain four basic project, all doing the same thing with different approaches. The scope of the example is to run a programm that instantiate two object, respectively from ClassA and ClassB and run Method1 and Method2 of those object throught a Manager. ClassA and ClassB inherit from the pure virtual class Base, and Manager hold a vector Base pointer.

# OneBinary
All classes are compiled and a single binary is produced

# SharedLib
Three Shared Library are produce: libManager.so (containing Manager and Base), libClassA.so (ClassA only) and libClassB.so (ClassB only). Main is linked against all three Shared Library.

#API
Identical to SharedLib, but libManager.so contain an additional Factory class that hold a list of construct for all inheritted object to the Base class. ClassA and ClassB are self registering to the API. ClassA and ClassB are linked against libManager.so but Main is not. The program try to create a ClassC object and exit with an error code since such a class doesn't exist.

#DynamicAPI
Identical to API, but the Factory now dynamically load the library of ClassA and ClassB when the main request them to be build. The program try to create a ClassC object and exit with an error code since such a class doesn't exist.

# How to run the example:
The procedure is identical for all three of them:
> cmake ./
> make
> ./main

# Contact
If you have question or recommandation, please feel free to contat me at a.matta _at_ surrey.ac.uk .
