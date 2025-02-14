// Program to learn typecasting in C++

#include<iostream>
using namespace std;

int main()
{
    int a = 20;
    float b = 45.14;

    cout << "(int)b: " << (int) b << endl;
    cout << "int(b): " << int (b) << endl;


    // Also
    // integer (operator) integer = integer
    // integer (operator) float or double = double
    cout << "a + b: " << a + b << endl;
    cout << "a + (int)b: " << a + (int)b << endl;
    cout << "a + int(b): " << a + int(b) << endl;

    return 0;
}