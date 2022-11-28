// Virtual Destructor in C++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class A
{
    int a;
    /*
    base pointer can point to the object of deerived
    */

public:

    int* p;

    A()
    {
        // constructor
        p = new int;
    }

   virtual ~A() /// this will cause late-binding....content of pointer 
    {

        delete p; 
        //this will no release memory of p but  this will release memory pointed by p
        // code to release memory pointed by pointer so that memosty should not get leak

        // this is destructor


    }
    void f1()
    {
        cout << endl << "this is f1 from A"<< endl;
    }

    
    
};

class B : public A
{
    int b;
public:
    void f1B()
    {
        cout << endl << "this is f1B from B" << endl;
    }

    ~B()  // we could written this as virtual ~B()
    {
        // this is destructor
    }
};

int fun();

int fun()
{
    // this is dynamic memory allocation
    A* ptrA = new A;
    B *ptrB = new B;
    //these are normal

    // this is not possible  :-    B* ptrB2 = new A;

    A* ptr = new B;// base class pointer deriver class object
    // memory will get asssigned to members of A and B but can accees members of A only
    // after fun ends memory for B...is not getting released
    /*
    it will release after program ends or 
    will release if we use delete for releasing that
    

    as soon as object of B destroys...destructor of B get called and eventually destructor of A called
    but no luck its early binding 
    .... due to early binding it binds only to type of A
    it calls only destructor of pointer type (here A)
    make late binding

    */

    ptr->f1();
    // this is valid
    
    ptr->f1B();
    // this is not valid....because there is early binding
    // cant acess if they are only in child class
    // this is early binding

    delete ptr;
}

int main()
{
    std::cout << "Hello World!\n";
    /*
    call 
    */
    fun();

    return 0;
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
