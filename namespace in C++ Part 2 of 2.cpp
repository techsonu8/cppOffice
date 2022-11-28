// namespace in C++ Part 2 of 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>///iostram.h is totally different
using namespace std; // this is namespace which is in iostream file
/*
accessing members of namespace
*/

namespace MySpace
{
    int a;// variable
    
    int f1(); // function

    class A  // class
    {
    public:
        void fun1();
    };
}

// while defining ....mentioning MySpace is mandatory
int MySpace::f1()
{
    cout << endl<<"this is f1 from MySpace" << endl;
    return 5;
}

void MySpace::A::fun1()
{
    cout << "this is fun1 from class A which is in the MySpace" << endl;
}

int main()
{
    std::cout << "Hello World!\n";
    
    // we can write either std::cout 
    // we can write    cout     if we wrote earlier     using namespace std;
    cout << "\nHello World!\n";
    // a  = 5; // this is wrong
    MySpace::a = 5; // no conflict with other namespace
    // OR
    /*
    using namespace MySpace;


    */
    using namespace MySpace;
    A obj;
    obj.fun1();
}

/* using
using keyword allows you to import an entire
namespace into your program with a global
scope

It can be used to import a namespace into
another namespace or any program
*/

// see follwing examples

/*
File1.h
namespace MySpace
    int a.b;
class A
    //some code

*/



/*

File2.h
#include "File1.h"
namespace MyNewspace
    using namespace MySpace;
int x.v;
A obj;
}

*/
