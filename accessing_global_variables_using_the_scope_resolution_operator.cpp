// Program to learn how to access the value of global variables using the scope resolution operator in case when local variables and global variables have the same 
// in C++

#include<iostream>
using namespace std;

int a = 20;

int main()
{
    int a = 5;
    cout << "a: " << a << endl;


    // If we want to access the value of the global variable a
    cout << "Global a: " << ::a << endl;

    return 0;
}