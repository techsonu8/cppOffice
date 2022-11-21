
#include <iostream>
#include <fstream>

using namespace std;
// this will read a file

// extraction operator considers space, tab and newLine as a delimiter ... it will .... space will be


// for that file should exist in that context / path
int main()
{
    // first we will create a file called myFile.dat

    //ofstream fout;

    //fout.open("myFile.dat"); 

    //cout << "Please wrtire whatever u want\n";
    //string str;
    //str = "hello there !";
    ////cin >> str;

    //fout << str;
    //fout.close();
    // 
    // 
    //suppose    file creation is done

    cout << "\n now file creation is done and then we will read the file and show on desktop\n";

    ifstream fin;
    // input file stream
    // inut from that file will go into variable and then to screen


    fin.open("myFile.dat");
    // input file stream
    cout << "\nFile opened succsessfully\n";

    char ch;
    cout << "\nthis is the file content\n";

    fin >> ch;
    //  (fn)obeject (>>)ExtractionoOperator (ch) ch as an argument

    while (!fin.eof())
    {
        cout << ch;
        fin >> ch;
    }
    fin.close();

   

    cout << "\nNow another file ...lets c" << endl;

    /*  this will tell u how to handle newline, tab and space situaltion
    * 
    * dont use cout fout....use get()....
    ifstream fin2;

    fin2.open("myText.txt");

    char ch2;

    ch2 = fin2.get();

    while (fin.eof() == NULL)
    {
        cout << ch2;
        ch2 = fin2.get();
    }

    fin2.close();

    */

    // myfile.dat should be there
    /*fin.open("myFile.dat" , );
    std::cout << "Hello World!\n";*/
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
