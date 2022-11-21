// tellg and tellp in C++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//this 

#include <iostream>
#include <fstream>
#include <istream>
#include <ostream>
/*
* g is for get pointer
* p is for put pointer
* 
streampos tellg();

//reading poinetr
tellg is a member function of istream

return position of the current character in input stream i.e. returning int


g is a pointer


//put or writing pointer
streampos tellp();

tellp is a member function of ostream

return position of the current character in output stream i.e. returning int


*/

using namespace std;
int main()
{
    ifstream fin;
    char ch;

    fin.open("abc.txt", ios::in);
    int currentPosition = fin.tellg();  // at begigning its zero ..... g is pointing to H

    cout << "Hello World hehehe ...Position : " << currentPosition<<endl;
    
    fin >> ch;
    // this will read value from ch to fin and ...g will point to index 1  ... g is poining to e

    currentPosition = fin.tellg();
    cout << "Position : " << currentPosition << endl;


    fin >> ch;
    // this will read value from ch to fin and ...g will point to index 1  ... g is poining to e

    currentPosition = fin.tellg();
    cout << "Position : " << currentPosition << endl;
    std::cout << "Hello World!\n";




    ofstream fout;
    fout.open("abc.txt", ios::app);
    //file is opened in append mode 
    // g is pointing to last location
    int pos = fout.tellp();
    cout << "this is wring ...index is :" << pos<<endl;

    fout << "famic";
    //append will treat the  last index as zero...and starts from that
    
    pos = fout.tellp();
    cout << "this is wring ...index is :" << pos << endl;
    fout.close();




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
