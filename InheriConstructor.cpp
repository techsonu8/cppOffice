// InheriConstructor.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class A
{
private:
    int prvt;
public:
    /*A()
    {
        cout << "this is A's default constructor"<<endl;
        cout << "Default : value of PRVT is :"<< prvt <<endl;
    }*/
    ///       C++ no default constructor exists for class
    A(int a)
    {
        prvt = a;
        cout << "This is parameterised constructor of A and its value is : "<<a << endl;
        cout << "parameterised : value of PRVT is :" << prvt << endl;

    }
}; 

class B : public A
{
public:
    B() : A(3)    // :A()       by defalut it(compiler) calls default constructor
    {
        cout << "This is B's default constructor" << endl;
    }

    B(int b) : A(b)
    {
        cout << "This is parameterised constructor of B and its value is : " << b << endl;
    }

    /*
    if parent dont have default constructor then in child class we should call its another constructor
    (may be its parameterised)  and pass that many arguments which are necessary
    (we have to make another constructor for child class if we want to pass values to parent class)
    */
};


int main()
{
    //std::cout << "Hello World!\n";
    
    //A objA1;
    //A objA2(3);
    
    //B objB1;
    B objB2(3);
    // we have passed 3 into private member of A
    return 0;
}



// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
