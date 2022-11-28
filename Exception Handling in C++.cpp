// Exception Handling in C++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

/*
Exception is any abnormal behavior  run time error
...considering noraml flow...
ur program should be read 2 handle any situation with good response/message


e.g Factorial  ...user should enter any +ve integer    but if user enters any other value like any special symbol then 
it may get crash ... so we should handle it 

c++ ... has in-built exception handling...we can easily manage
we can handle without exception handling but it is not professional

///

Program statements that you want to monitor for exceptions are contained in a    try     block.
If any exception occurs within the try block, it is   thrown     (using throw).
The exception is    caught   , using    catch  , and  processed.

*/

int main()
{
    int i = 3;
    cout << "\nwelcome to exception handling\n";


    try // for monitoring
    {
        // throw execption
        // throw must be executed within try block proper  or     any function that code within block calls
        // 
        // 
        // we can write many throw statements ........using if statements
        throw 10;///we can write any constant values after throw ....will be matched with argument in catch....
        ///lines after throw block will not get executed
        // we can write only throw; ...terminate function will be called ..... it will call abort internally
        
        // but if we want that catch should get executed then there should be any constant value after throw 
        // it may be int , char , or of any type or may be class type object 


        if (i == 1)
        {
            throw 1;

            // throw can be defined in another function we can call that funtion
        }

        if (i == 2)
        {
            throw 12.2;
        }

        if (i == 3)
        {
            throw 'c';
        }

        if (i == 3)
        {
            throw "hello";
        }

        cout << "this is ...try ... block" << endl;

    }
    // we should declare and define catch ri8 after try block
    // we can define many catch blocks

    catch (int e) // run-time error ... of type mis-match
    {
        cout << "\n Exception number is : " << e <<endl;
    }
    // try should be attached with catch also
    // individual they cant be written independently 
    
    catch (char e)
    {
        // we ca
    }

    // if same catches are there ... first match case will be executed

    catch (...)
    {
        cout << "\nthis can catch anything" << endl;
    }

    catch (int)
    {
        cout<<"no need to access the integer directly.....we can specify only its type  " << endl;
    }

   cout << "\nHello World!\n";

}




