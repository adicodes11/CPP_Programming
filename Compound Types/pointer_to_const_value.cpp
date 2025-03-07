// Pointer to const value

#include <iostream>

int main()
{
    // 
    // 1. Type mismatch between pointer and what pointer is pointing to, thus results in compiler error
    const int a{5};
    // int *ptr{&a};   // compile error: cannot convert from const int* to int*

    const int *ptr{&a}; // Instead, we should be doing this
    std::cout << "*ptr: " << *ptr << '\n';
    
    // 
    // 2. We can't change the value at the memory address pointed by a const pointer
    // *ptr = 3;    // We can't do this


    // 
    // 3. We can do this though
    int b{4};
    ptr = &b;

    return 0;
}