// namespace in C++ Part 1 of 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream> /// this is header file 
// it contains declaration of identifiers(like variable,classes,functions and all).....not definitions 
// header is for compiler purpose
// library files contains definitions 
using namespace std;  // this is how w
void fun();
// namespace is group of declarations....container for identifier
// we can code this/our namespace in either i nthis same source file or 
// we can make another file andm make that as header file .h 

// namespace is good for avoiding confusion/ to avoid confusion for same declaration

namespace MySpace   // name of ur namespace 
{
    //declaration
     // this is not a class 
    // we cant create instance of namespace       we are nit 

    /*
    it should be in global space or in-nested with another namespace
    may be we
    */
} // no semicolon

namespace ms = MySpace;  // we can use alias for ease of use 
// there can be unnamed namespaces too

/*
namespace definition can be continued and extended over multiple files,
they are not redefined or overridden

*/
int main()
{
    std::cout << "Hello World!\n";
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
void fun()
{
    namespace myNamesas
    {
        // this is wrong
    }


}


namespace mine
{
    int a, g;
    void f1();
}

namespace mine
{
    int b;
}

// these two will be combined as a single

namespace mine
{
    int a, g;
    int b;

    void f1();
}
