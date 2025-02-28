// Program to learn how to use asserts in our C++ programs


// #define NDEBUG

#include <iostream>
#include <cassert>

// Function to take user input for numbers
int getInteger()
{
    int num{};

    std::cout << "Enter an integer: ";
    std::cin >> num;

    if(!(std::cin.eof() && std::cin.peek() != '\n'))
    {
       static_assert(1 == 1, "Extraneous characters remaining in the input buffer!\n");
       return 0;
    }

    return num;
}

int main()
{
    int num1{getInteger()};
    int num2{getInteger()};

    return 0;
}