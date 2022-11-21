// File Handling in C++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


 /*
    *
    * File Handling
    Data Persistence
    till this point ,....data in variable ....destroy after program ends...that means RAM ...it temporary

    so consider Bank Account Balance ....   it should be paeramnent

    store it in file ...  ssd ...hdd...cloud
    read -write according to ur need
    */


    /*
    create file
    read the file
    or may be open the file
    edit it modify it

    write back
    save it



    predefined classes and its object....we can use methods of that obejct

    output stream      data----> from program varible to file

    input stream      data----> from file to program varible
    */

#include <iostream>

#include <fstream>
#include <conio.h>

using namespace std;


int main()
{
    std::cout << "Hello World!\n";

    ofstream fout;  // this is just output stream

    // now create or open file

    fout.open("myFile.dat");
    //getch();
    //  file will be opened and linked with  fout created ...that ofstream
    // if its not exist and then fout will create it in that related path

     // file is created in hard disk and then fetched in the RAM

    /*
     .dat means    data file
    this is relative path : -   fout.open("File Handling in C++.cpp");
    this is full/actual path :-  fout.open("D:\All Codes\C C++\cpp\File Handling in C++.cpp");
     */
    fout << "hello !";
   // getch();

    fout.close();
   // getch();


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
