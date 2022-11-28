// Deep Copy and Shallow Copy in C++.cpp : This file contains the 'main' function. Program execution begins and ends there.
// 
// pointer to a memory loacation which is released but used initially is Dangling Pointer
#include <iostream>
using namespace std;

class Dummy
{
private:
    int a, b;
    int* p;   // if not initilized 
public:
    Dummy()
    {
        p = new int;
    }

    Dummy(Dummy& d)
    {
        a = d.a;
        b = d.b;
        *p = *(d.p);
    }
    void setData(int x, int y, int z)
    {
        a = x;
        b = y;
        *p = z;
    }
    
    void showData()
    {
        cout << "\n a : " << a << "b :" << b << " \n";
    }
    
    //destrcutor
    ~Dummy()
    {
        delete p;
    }


    /* Copy constructor by complier
    Dummy(Dummy& d)
    {
        a = d.a;
        b = d.b;
        // p = d.p;
    }   this is shallow copy 

    by the copying data of all member variables as it is



    // Deep Copy   is mandatory if there is pointer in the class....
     
     we need to create it by ourself either for deep copy or for assignment

    Creating an object by copying data of another
    object along with the values of memory
    resources resides outside the object but
    handled by that object.

    if we use shallow copy..... a pointer address will be copied and memory will be shared...

    */
};

int main()
{
    std::cout << "Hello World!\n";

    Dummy d1;
    d1.setData(2,3,5);

    Dummy d2 = d1;   
    // this is copy
    // 2 types .....   deep copy and shallow copy
    // if we wrtie like this Dummy  d2 = d1  ... only one thing is happended amongst two
    // either by copy constructor or by default assignment operator/implicit copy assignment operator
    // two things are done by compiler    copy const. and operator overlaod

    /*
    Dummy d2 = d1;   copy constructor called
    
    &
    
    Dummy d2;
    d2 = d1;  /// implicit copy assignment operator

    these two are bit different
    */
    cout << "this is value of d2 copied" << endl;
    d2.showData();

}

