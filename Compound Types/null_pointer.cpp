// Program to learn about NULL pointers in C++

#include <iostream>

int main()
{
    // 1. Easiest way to create a NULL pointer in C++ is to perform value initialization for it (i.e., {})
    int *ptr{};

    // 2. Second method is using NULL keyword
    int *ptr2 = NULL;

    // 3. We can use the keyword 'nullptr' to explicitly initialize or assign a pointer a null value.
    int *ptr3 = nullptr;

    //
    // 4. Much like dereferencing a dangling (or wild) pointer leads to undefined behavior,
    // dereferencing a null pointer also leads to undefined behavior. In most cases, it will crash your application.
    // std::cout << "*ptr3: " << *ptr3 << '\n';     // Program halts and even crashes

    //
    // 5. Checking for null pointers
    if (ptr3 == nullptr)
    {
        std::cout << "ptr3 is a NULL pointer!\n";
    }

    int *nullPtr{};
    std::cout << "nullPtr is " << (nullPtr == nullptr ? "null\n" : "non-null\n"); // explicit test for equivalence

    //
    // 6. Pointers will also implicitly convert to Boolean values: a null pointer converts to Boolean value false,
    // and a non-null pointer converts to Boolean value true
    int val{3};
    int *valPtr { &val };

    if(valPtr)
    {
        std::cout << "valPtr is non-null pointer\n";
    }
    else
    {
        std::cout << "valPtr is a null pointer!\n";
    }

    int *nullPtr2{};

    std::cout << "nullPtr2 is " << (nullPtr2 ? "non-null pointer\n" : "null pointer\n");


    // 
    // 7.1 Legacy null pointer literals: 0 and NULL
    // In older code, you may see two other literal values used instead of nullptr.
    // The first is the literal 0. In the context of a pointer, the literal 0 is specially defined to mean a null value, 
    // and is the only time you can assign an integral literal to a pointer.

    // float* ptr { 0 };  // ptr is now a null pointer (for example only, don't do this)
    // float* ptr2; // ptr2 is uninitialized
    // ptr2 = 0; // ptr2 is now a null pointer (for example only, don't do this)


    // 
    // 7.2 Additionally, there is a preprocessor macro named NULL (defined in the <cstddef> header). 
    // This macro is inherited from C, where it is commonly used to indicate a null pointer.
    // Both 0 and NULL should be avoided in modern C++ (use 'nullptr' instead).

    // double* ptr { NULL }; // ptr is a null pointer
    // double* ptr2; // ptr2 is uninitialized
    // ptr2 = NULL; // ptr2 is now a null pointer



    // 
    // 
    // 
    // 8. Favor references over pointers whenever possible

    // Pointers and references both give us the ability to access some other object indirectly.
    // Pointers have the additional abilities of being able to change what they are pointing at, and to be pointed at null. 
    // However, these pointer abilities are also inherently dangerous: A null pointer runs the risk of being dereferenced, 
    // and the ability to change what a pointer is pointing at can make creating dangling pointers easier:

    // int* ptr { };
    // {
    //     int x{ 5 };
    //     ptr = &x; // assign the pointer to an object that will be destroyed (not possible with a reference)
    // } // ptr is now dangling and pointing to invalid object
    // if (ptr) // condition evaluates to true because ptr is not nullptr
    //     std::cout << *ptr; // undefined behavior

    // Since references can’t be bound to null, we don’t have to worry about null references. 
    // And because references must be bound to a valid object upon creation and then can not 
    // be reseated, dangling references are harder to create.

    // Because they are safer, references should be favored over pointers, 
    // unless the additional capabilities provided by pointers are required.
    // 
    // 
    // 

    return 0;
}       