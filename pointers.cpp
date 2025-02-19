// Program to learn the usage of pointers in C++

#include <iostream>
using namespace std;

int main()
{
    int a = 20;
    int *ptr = &a;

    cout << "&a: " << &a << '\n';
    cout << "ptr: " << ptr << '\n';
    cout << "a: " << a << '\n';
    cout << "*ptr: " << *ptr << '\n';
    cout << endl;



    // Double pointer
    int b = 13;
    int *ptrB = &b;
    int **ptrptr = &ptrB;

    cout << "&b: " << &b << endl;
    cout << "ptrB: " << ptrB << endl;
    cout << "b: " << b << endl;
    cout << "*ptr: " << *ptrB << endl;
    cout << "&ptrB: " << &ptrB << endl;
    cout << "ptrptr: " << ptrptr << endl;
    cout << "*ptrptr: " << *ptrptr << endl;
    cout << "**ptrptr: " << **ptrptr << endl;

    return 0;
}