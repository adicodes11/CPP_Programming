// Write a function template named sub() that allows the user to subtract two values of different types. The following program should run:

#include <iostream>

// Function template - declaration
template <typename T, typename U>
auto sub(T x, U y)
{
    return x - y;
}

// Other way around
auto substract(auto x, auto y)
{
    return x - y;
}

int main()
{
    std::cout << sub(3, 2) << '\n';
	std::cout << sub(3.5, 2) << '\n';
	std::cout << sub(4, 1.5) << '\n';
    std::cout << '\n';
    
    std::cout << substract(3, 2) << '\n';
	std::cout << substract(3.5, 2) << '\n';
	std::cout << substract(4, 1.5) << '\n';

    return 0;
}