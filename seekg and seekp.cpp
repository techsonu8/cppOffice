// seekg and seekp.cpp : This file contains the 'main' function. Program execution begins and ends there.
// tells about file handling 



#include <iostream>
#include <fstream>
#include <istream>
#include <ostream>

// input stream
// seekg is defined in istream class
/*
prototype is :

istream& seekg(streampos pos);   // parameter is int

istream& seekg(streamoff off,ios_base::seekdir way);

Defined in istream class
Its prototype is
- istream& seeg(streampos pos);  takes int as argument   return istream reference
-istream& seekg(strea moff off, ios_base:seekdir way);

pos is new absolute position within the stream
(relative to the beginning).

off is offset value, relative to the way parameter

way values ios_base::beg, ios_base::cur and
OS base::end

beg :- begining

cur :- current

end :- last

*/


using namespace std;
void fun();

int main()
{
    std::cout << "Hello World!\n";

    ifstream fin;

    fin.open("abc.txt");
    // cosider it is opened successfully
    cout << fin.tellg();

    cout<<endl<<(char)fin.get()<<endl;  // return int

    cout <<"current position is : " << fin.tellg()<<endl;
    cout << endl << (char)fin.get() << endl;
    cout << "current position is : " << fin.tellg();
    cout << endl << (char)fin.get() << endl;
    // if we want 2 make sure that get pointer should point to index zero
    // we will use seekg()     it will make g pointer will points towards index zero(we can change this index)
    cout << endl << "I will use seekg" << endl;
    fin.seekg(0);
    cout << fin.tellg();
    cout << endl << (char)fin.get() << endl;  

    cout << "we will point to anyt other location" << endl;

    fin.seekg(7);
    cout << fin.tellg();
    cout << endl << (char)fin.get() << endl;
    
    cout << "u will remeber from it C" << endl;

    fin.seekg(2, ios::cur);
    // it will go 2 position to right from current position
    // 2 is offset   and +2 means go towards ri8     and     -2 means go towards left
    // fin.seekg(2, ios::beg);
    // it will go 2 position to right from beginingi.e. 0 position
    // same for end



    //  seekp is same as like seekg   its a member of ostream class
    /* p is for put pointer
    
    Defined in ostream class
    Its prototype is
    - ostream& seekp(streampos pos)
    - ostream& seekp(streamoff off, ios_ase::seekdir way);
    pos is new absolute position within the stream
    (relative to the beginning).
    off is offset value, relative to the way parameter
    way values ios_base::beg, ios_base::cur and
    ios_base::end
    
    
    */

    //call this function if u want
     fun();
     return 0;
}

void fun()
{
    cout << "this is running of fun"<<endl;

    ofstream fout;
    fout.open("abc.txt", ios::ate||ios::app);
    cout << fout.tellp()<<endl;
    fout << "ABCEDEFG";
    cout << fout.tellp()<<endl;

    fout.seekp(2, ios_base::beg);

    // this will put put pointer to ri8 from beg means begining
    cout << fout.tellp()<<endl;
    fout.close();

}


