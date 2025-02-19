// Program to learn the usage of constants in C++

#include<iostream>
using namespace std;

int main()
{
    // 1. Using const keyword
    const int a = 20;
    cout << "a: " << a << endl;

    // We can't reinitialize constants
    // a = 45;                         // Doing so will give error
    // cout << "a: " << a << endl;

    return 0;
}