// Lecture 21 File Handling in C++ Part 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
using namespace std;

// lets learn about opening modes
/*
open function argument
ios::in        input/read 
ios::out        output/write       old content deleted....write as newly
ios::app        append       its like retaining old content and append the data
ios::ate        update      modification at random
ios::binary     
*/
int main()
{

    std::cout << "Hello World!\n";

    ofstream fout;

    //we can open same file in different options
    fout.open("myFile.dat", ios::in); //// ios::out    this is by-dafault   default argumets/parameter
    //fout.open("myFile.dat",);

    /*
    default mode is opened is text and not binary....open it with ios::binary

    differebc3

    fout<<"My name is \nFamicTech"
        text :- \n will be taken as new line
        binary :-  as it is
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
