// Abstract Class.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
/*
A do nothing function is Pure Virtual Function

*/


class Person
{
public:
    virtual void fun()=0; // special syntax  ..... this is pure virtual function 
    // do nothing funcrion
    // no function definition at all
    // we need to make this virtual method that 

    void MyMethod()
    {
        cout << "this is mymethod ";
    }
}; 
// we cant create object of this Class

// we need to crate child class if we want to use MyMethod 
class Student : public Person
{
    //we should override the fun in the child class
    void fun()
    {
        cout << "this is overided fun";
    }
};

int main()
{
    cout << "Hello World!\n";
    Student s1;
    // objcet of student ...we cant make object of Faculty class
    // any class containing at least one pure virtual method/function   .... is Abstract Class
    // we cant instantiate Abstract class
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
