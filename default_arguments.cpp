// Program to learn the concept of default arguments in C++

/*

* Default arguments:
    Default argument is a default value provided to a function's parameter.

*/

#include <iostream>

// 1. Function with default argument
int add(int x, int y, int z = 10)
{
    return x + y + z;
}

// 2.


// 3.
int cuboidVolume(int l, int b, int h = 12);

int main()
{
    // 1.
    std::cout << "add(1, 2, 3): " << add(1, 2, 3) << '\n';
    std::cout << "add(1, 2): " << add(1, 2) << '\n';

    // 2.

    // 3. Default arguments are also useful in cases where we need to add a new parameter to an existing function.
    // If we add a new parameter without a default argument, it will break all existing function calls (which aren’t
    // supplying an argument for that parameter). This can result in a lot of updating of existing function calls
    // (and may not even be possible if you don’t own the calling code). However, if we add a new parameter with a 
    // default argument instead, all existing function calls will still work (as they will use the default
    // argument for the parameter), while still letting new calls to the function specify an explicit argument
    // if desired.
    std::cout << cuboidVolume(1, 2) << '\n';

    return 0;
}

// 3.
int cuboidVolume(int l, int b, int h)
{
    return (l * b * h);
}
