// Program to check for the size of pointers in C++

#include <iostream>

int main()
{
    char *charPtr{};
    int *intPtr{};
    double *doublePtr{};
    long double *longDoublePtr{};

    std::cout << "sizeof(charPtr)    : " << sizeof(charPtr) << " Bytes" << '\n';
    std::cout << "sizeof(intPtr)     : " << sizeof(intPtr) << " Bytes" << '\n';
    std::cout << "sizeof(doublePtr)  : " << sizeof(doublePtr) << " Bytes" << '\n';
    std::cout << "sizeof(Ptr)        : " << sizeof(longDoublePtr) << " Bytes" << '\n';

    return 0;
}