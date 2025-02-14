// Program to learn about the implicity type conversion in C++

/*

* In C++, implicit type conversion takes place, thus if we have
    float numA = 34.14;
    double numB = 34.14;

    The C++ compiler would implicitly convert floating point values to double, which means after above declaration too, value of numA would be treated as double value by default, doesn't changes the variable size though***
    If we want to avoid this, then we need to do this:
    
    float numA = 34.14f;
    double numB = 34.14l;

*/


#include<iostream>
using namespace std;

int main()
{
    float numA = 34.14;     // Compiler for all it's tasks interprets numA as double by default (Implicit type conversion, promotes float to double)
    double numB = 34.14;

    // Checking value and size
    cout << "numA: " << numA << endl;
    cout << "sizeof(numA): " << sizeof(numA) << endl;
    cout << "numB: " << numB << endl;
    cout << "sizeof(numB): " << sizeof(numB) << endl;
    
    
    // However when we do something like this
    numA = 34.14f;      // Compiler starts treating numA value as float now
    numB = 34.14;
    
    // However when we do something like this
    numA = 34.14F;      // We can use F too
    numB = 34.14;


    // Verifying using sizeof() operator
    cout << endl;
    cout << "sizeof(34.14): " << sizeof(34.14) << endl;     // double
    cout << "sizeof(34.14f): " << sizeof(34.14f) << endl;   // float
    cout << "sizeof(34.14F): " << sizeof(34.14F) << endl;   // float
    cout << "sizeof(34.14l): " << sizeof(34.14l) << endl;   // long double
    cout << "sizeof(34.14L): " << sizeof(34.14L) << endl;   // long double

    

    return 0;
}