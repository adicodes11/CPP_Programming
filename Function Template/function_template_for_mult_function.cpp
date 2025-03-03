// Write a function template named mult() that allows the user to multiply one value of any type (first parameter) 
// and an integer (second parameter). The second parameter should not be a template type. 
// The function should return the same type as the first parameter. 

#include <iostream>

// Function template - declaration
template <typename T>
T mult(T x, int y);

int main()
{
    std::cout << mult(2, 3) << '\n';
	std::cout << mult(1.2, 3) << '\n';
    
    return 0;
}

// Function template - defintion
template <typename T>
T mult(T x, int y)
{
    return x * y;
}