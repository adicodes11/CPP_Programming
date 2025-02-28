// Program to learn the usage of reference variables in C++

/*

* Reference variables are the variables that are used to point to 
* With the help of these, we can create variables that refer to the same memory address

*/

#include<iostream>
using namespace std;

int main()
{
    int a = 20;
    int &b = a;

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    
    // Both have the same memory address
    cout << "&a: " << &a << endl;
    cout << "&b: " << &b << endl;
    
    
    // Changing the value of any of them changes the value of other
    a = 4;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    b = 10;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;


    


    return 0;
}