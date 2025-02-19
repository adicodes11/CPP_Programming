// Program to learn the usage of variables in C++

/*

* Reference Variables are variables that refer to a common memory address

*/

/*
-------------------------------------------------------------------------
* Different forms of initialization:

1. int a;         // default-initialization (no initializer)

   // Traditional initialization forms:
2. int b = 5;     // copy-initialization (initial value after equals sign)
3. int c ( 6 );   // direct-initialization (initial value in parenthesis)

   // Modern initialization forms (preferred):
4. int d { 7 };   // direct-list-initialization (initial value in braces)
5. int e {};      // value-initialization (empty braces) --> It makes a zero intialization

*/

#include <iostream>
using namespace std;

int main()
{
    // 0. Normal declaration + intialization
    int i = 45;
    cout << "i: " << i << endl;

    // 1. using {} for initialization of variables at the time of declaration
    int a{2};
    cout << "a: " << a << endl;

    // 2. We can also use () for initialization of variables
    int b(3);
    cout << "b: " << b << endl;

    // 3. Checking what does uninitialized variables store in C++
    int uninitialized_variable;
    cout << "uninitialized variable: " << uninitialized_variable << endl;

    // 4. Reference Variables
    int p = 13;
    int &q = p;
    cout << "p: " << p << endl;
    cout << "q: " << q << endl;

    p = 40;
    cout << "p: " << p << endl;
    cout << "q: " << q << endl;

    q = 30;
    cout << "p: " << p << endl;
    cout << "q: " << q << endl;

    // 5. Value initialization
    int e{};
    cout << "e: " << e << endl;

    return 0;
}