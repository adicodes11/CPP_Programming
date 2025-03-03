// Program to learn the concept of function overloading in C++

/*

* Function Overloading:
    It is a feature of C++, that allows us to create functions that share a common function name, 
    but have different parameters(in terms of number, type and order)


*/

#include <iostream>

// Function to add integers
int add(int x, int y)
{
    return x + y;
}

// Function to add doubles
double add(double x, double y)
{
    return x + y;
}

// Function to add different data types
double add(int x, double y)
{
    return x + y;
}

// Function to add different data types
double add(double x, int y)
{
    return x + y;
}

// Function to add three integers
int add(int x, int y, int z)
{
    return x + y + z;
}

// Function to add three doubles
double add(double x, double y, double z)
{
    return x + y + z;
}

// This won't work - as return type don't contribute to the differntiation of overloaded function 
// double add(int x, int y)
// {
    //     return x + y;
    // }

int main()
{
    std::cout << add(2, 3) << '\n';
    std::cout << add(2.2, 3.4) << '\n';
    std::cout << add(2, 3.4) << '\n';
    std::cout << add(2.2, 3) << '\n';
    std::cout << add(1, 2, 3) << '\n';

    // We need to be aware of function overload ambiguity
    // As here, the compiler is looking for a function with signature -> add(double, int, int)
    // and since, it can't find exact match (step 1), it tries for numeric promotion (step 2)
    // but, there's no chance of numeric promotion here, thus goes for numeric conversion (step 3)
    // but then too, since after conversion, double will be converted to int and checked for 
    // and this conversion can be found in function signature add(int, int, int), also it performs conversion
    // from int to double to check that way too, and since can also find the matching function signature
    // as add(double, double, double) --> Since now in same step compiler has found two matches, and now can't 
    // determine which one to go with, thus due to this match ambiguity, compiler throws error for the same
    // // std::cout << add(1.2, 2, 3) << '\n';  // <--------
    
    return 0;
}