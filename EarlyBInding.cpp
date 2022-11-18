#include <iostream>
using namespace std;

class A
{
public:
    void f1()
    {
        cout << "this is f1 from A"<<endl;
    }

    void MyMethod()
    {
        cout << "this is MyMethod from class A" << endl;
    }

    void f2()
    {
        cout << "this is f2 from A" << endl;
    }
};

class B : public A
{
public:
    

    void MyMethod() // this is method OverRiding  // same name as Parent method........this will override if object of B use this fun
    {
        cout << "this is MyMethod from class B" << endl;
    }

    void f2(int x)
    {
        cout << "this is f2 from B" << " and its value is " << x <<endl;
    }

    void fun()
    {
        cout << "this is fun from B\n";

    }
    // this is Method over-LOADING
    void fun(int c)
    {
        cout << "this is fun from B and with its int value is " << c << endl;
    }


};


int main()
{

    //std::cout << "Hello World!\n";
    B objB;
    objB.MyMethod();  // this is method overRIDING   

    B objB2;
    objB2.f2(2);
   

}