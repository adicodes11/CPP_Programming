// lvalue references are nothing but our normal references (reference variables)

#include <iostream>

int main()
{
    int a{2};
    int &b = a;

    // Printing Values
    std::cout << "a: " << a << '\n';
    std::cout << "b: " << b << '\n';
    
    // Printing Addresses
    std::cout << "&a: " << &a << '\n';
    std::cout << "&b: " << &b << '\n';

    // Modifying value
    b = 3;
    std::cout << "a: " << a << '\n';
    std::cout << "b: " << b << '\n';


    // 
    // Much like constants, all references must be initialized.
    int x {4};
    // int& ref;   // This will result in an error
    int& ref {x};

    std::cout << "x: " << x << '\n';
    std::cout << "ref: " << ref << '\n';



    // 
    // non-const lvalue references can't be referenced with const lvalues
    // This simply means that the data type of lvalue being referenced and the one referencing it should be the same
    const int aa{5};
    // int& bb{aa};     // This is not allowed
    const int& bb{aa};



    // 
    // If you try to bind a reference to an object that does not match its referenced type, 
    // the compiler will try to implicitly convert the object to the referenced type and then bind the reference to that.
    // 
    // int x { 5 };
    // int& ref { x };            // okay: referenced type (int) matches type of initializer

    // double d { 6.0 };
    // int& invalidRef { d };     // invalid: conversion of double to int is narrowing conversion, disallowed by list initialization
    // double& invalidRef2 { x }; // invalid: non-const lvalue reference can't bind to rvalue (result of converting x to double)




    // 
    // Once initialized, a reference in C++ cannot be reseated, meaning it cannot be changed to reference another object.
    int xx { 5 };
    int yy { 6 };

    int& f { xx }; // ref is now an alias for x

    f = yy; // assigns 6 (the value of y) to x (the object being referenced by ref)
    // The above line does NOT change ref into a reference to variable y!

    std::cout << "xx: " << xx << '\n'; // user is expecting this to print 5

    // When a reference is evaluated in an expression, it resolves to the object it’s referencing. 
    // So f = yy doesn’t change f to now reference yy. Rather, because f is an alias for xx, 
    // the expression evaluates as if it was written xx = yy -- and since yy evaluates to value 6, 
    // xx is assigned the value 6.



    // 
    // 

    return 0;
}