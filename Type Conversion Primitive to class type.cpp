// Type Conversion Primitive to class type.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

/*
* simple concept
Primitive Data Type ....also a keywords :    int char float double
Class Type / user defined data type : 
*/

class Complex
{
private:
    int real, img;

public:

    Complex()
    {
        //default constrcutor
    }

    Complex(int k)
    {
        real = k;
        img = 0;
    }
    void setData(int x, int y)
    {
        real = x;
        img = y;
    }

    void showData()
    {
        cout << "The imaginary number is "<< real << " + " << img << " i"<<endl;
    }
};

int main()
{

    /*
    this is automatic bcoz both are primitive
    int x = 4;
    float y;
    y = x;       Automatic type conversion ... no data loss



    float y = 3.4;
    int x;
    x = y;     Automatic type conversion ... but data loss
    */
    /////////////////////////////////
    /*
        if one is primitive and other is class type...will give error
        this is not automatic
        
        Complex c1; // Complex class used 

        int x = 5; //primitive int
        c1 = x; /// this line will give error.
    
    */

    //2 diffrernt type 4 possibilities
    // primitive to primitive is automatic
    

    cout << "WE will see primitive to class type conversion\n this can be implemented through constructor"<<endl;

    Complex c1;
    int x = 5;
    c1 = x;    // this means   c1.Complex(x);
    // c1 = x;   // error :- cannot convert to int to complex
    /*
    use constructor for this 

    constructor is called also when we assign other types of values for other types of 
    */

    std::cout << "Hello World!\n";
    c1.showData();

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
