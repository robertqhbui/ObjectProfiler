Description
===========
A simple example to demonstrate the usage of C++ template for writing the generic code for any type.
The template accepts an object/pointer to an point and keeps track of how many of the same type
is being managed by this template.
The caller must delete the object if the caller used new.


Build
======
You can build open the Visual Studio solution or project using Visual Studio 2022 or later, with C++14. 
Only the Release for x64 build configuration is setup. I have not tested with other configurations yet.
Therefore, ensure your build configuration is set to Release for x64 before attempting to build.

The project include a "cut-down" version of boost.

The main program has test code with the TestClass as example of creating your own class. You will need
to have your constructor(s)/destructor(s) plus overloading of the << operator for display the internal
data.

This is an example code therefore I have no included unit tests.

Misclaimer
==========
The naming for the main project is a light misnomer. I may change the project name later.