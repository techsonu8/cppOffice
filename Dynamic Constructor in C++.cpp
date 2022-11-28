// Dynamic Constructor in C++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
  
class A
{
private:
    int a, b;
    int* p;

public:
    A()
    {
        a = 0;
        b = 0;
    }


   A(int x, int y)
    {
       a = x;
       b = y;
    }


   // dynamaic constructor 
   A(int x, int y, int z)  // constructor which create memory  block dynamlically is a dynalic constructor
   {
       p = new int; // this is will create block dynamically
       *p = z;

       // object is going to use memory region which is dynaically created by constructor
   }
};

// constructor is first function in lifetime of object...its guranteed
// if we want to make some gurantee about something ... write/code it in constructor
int main()
{

    std::cout << "Hello World!\n";

    A o1, o2, o3(3,4,5);
    // unless and until object refers something or contain something ...its not valid object 
    // its not valid object unitl it represents something...its OOPs concept

    /*
    Constructor can allocate dynamically created memory to the object

    myth :- constructor is allocating the memory to the objects
    this is not true...


    true:             Student *p = new Student();       // this is normal constructor only
    this is not dynamic constructor
    
    sequence:
       first object gets memory
       then constructor is getting called
       constructor will initilize the object 
    */



}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
