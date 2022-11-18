// ClassTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


//generic class .... class template
template<class X>
class ArrayList
{
private:
    struct ControlBlock // memory is not allocated
    {
        int capacity;
        X* arr_ptr;
    };

    ControlBlock* s; // memory  allocated

public:
    ArrayList(int cap)
    {
        //this is Constructor
        s = new ControlBlock();
        s->capacity = cap;
        s->arr_ptr = new X[s->capacity];
    }

    void addElement(int index, X data)
    {
        if (index >= 0 && index <= s->capacity - 1)
            s->arr_ptr[index] = data;
        else
            cout << "\nArray index is not valid\n";
    }

    void viewElement(int index, X& data)
    {
        if (index >= 0 && index <= s->capacity - 1)
            data = s->arr_ptr[index];
        else
            cout << "\nArray index is not valid\n";
    }

    void viewList()
    {
        for (int i = 0; i < s->capacity; i++)
        {
            cout << " " << s->arr_ptr[i];
        }
    }
};
int main()
{
    // in previous code we created int type data arraylist
    // now its generalised

    ArrayList <float>list1(3);    // arraylist of float type
    list1.addElement(0, 32.33);
    list1.addElement(1, 33.37);
    list1.addElement(2, 34.356);
   /* X dataview;
    list1.viewElement(0,dataview);
    cout << "data is " << dataview << endl; */
    list1.viewList();
    cout << "Hello World!\n";

    /*
    this is used for int ...... here data type used is int
    if we need to make float data...we need to create new class...and same fucntionality
    ...another ...if we want to use

    use template class
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
