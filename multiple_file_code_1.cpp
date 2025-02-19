// Program to learn the concept of working with multi code files in a project or program
// File used: multiple_file_code_2.cpp

/*

* We need to compile all the related files together with commands like this: g++ .\multiple_file_code_1.cpp , .\multiple_file_code_2.cpp

*/


#include<iostream>
using namespace std;

int add(int, int);      // We need to atleast declare the function to be used whose defintion is in any other file

int main()
{
    int x{5};
    int y{7};

    cout << "x + y: " << add(x, y) << endl;

    return 0;
}