// Program to learn the concept of function template in C++

#include <iostream>

// Function template to calculate the max of two numbers
template <typename T> // This is the template parameter declaration defining T as a type template parameter
T max(T x, T y) // This is the function template definition for max<T>
{   
    return (x < y) ? y : x;
}

int main()
{
    std::cout << "The max of 2 and 3 is: " << max<int>(2, 3) << std::endl;
    std::cout << "The max of 2.5 and 2.3 is: " << max<double>(2.5, 2.3) << std::endl;
    std::cout << "The max of a and A is: " << max<char>('a', 'A') << std::endl;

    return 0;
}