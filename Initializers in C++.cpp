// Initializers in C++.cpp : This file contains the 'main' function. Program execution begins and ends there.
// this is Initializaers ;list

#include <iostream>
using namespace std;
/*
it is used to initializ data members of a class


*/

class Dummy2
{
private:
    int a;
public:
    Dummy2()
    {
        a = 6;  // a is initilize
    }
};
// we can initilize class members other way also
// through initilizers
class Dummy
{
private:
    int a;
public:
    Dummy() : a(5)    // this initilizers list
    {
        // what is the reason to make it here
        // it is used to initilize
    }
};

class Dummy3
{
private:
    int a ,b;
    const int x;  // here we cant inilize const varible bcoz its class member
    // but we have to initilize it at the time of mem allocation or declarraion

    int& y;     //same for reference 
public:
    Dummy3(int &n) : a(5) , b(10), x(32),y(n)   // this initilizers list
    {
        // n will cantain reference of m
        // we cant initilize const variable here
    }
};


int main()
{
    std::cout << "Hello World!\n";

    int m = 40;
    Dummy3 d1(m);

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
