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

int main()
{
    // std::cout << add(2, 3.5);

    return 0;
}