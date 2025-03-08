// Program to learn scoped enumeration in C++

#include <iostream>


// Scoped Enumeration
enum class Pet
{
    cat,
    dog,
    pig,
    whale
};


int main()
{
    // 1. Taking scoped enumeration input
    std::cout << "Enter pet (0=cat, 1=dog, 2=pig, 3=whale): ";
    // std::cin >> myPet;   // This won't work
    int input{};
    std::cin >> input;
    Pet myPet{static_cast<int>(input)};
    Pet myPet1{input};      // No need for conversion as of C++17



    // 2. Performing output for scoped enumeration
    // std::cout << "My pet is " << myPet << '\n';      // This won't work, as scoped enumerations aren't implicitly converted to integers
    std::cout << "My pet is " << static_cast<int>(myPet) << '\n';   // explicit conversion to int
    // std::cout << "My pet is " << to_underlying(myPet) << '\n';   // convert to underlying type (C++23)
    

    std::cout << "My pet is " << static_cast<int>(myPet1) << '\n';   // explicit conversion to int

    return 0;
}