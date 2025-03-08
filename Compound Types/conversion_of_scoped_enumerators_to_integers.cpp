/*

* Easing the conversion of scoped enumerators to integers (advanced) 

Scoped enumerations are great, but the lack of implicit conversion to integers can sometimes be a pain point. 
If we need to convert a scoped enumeration to integers often (e.g. cases where we want to use scoped enumerators 
as array indices), having to use static_cast every time we want a conversion can clutter our code significantly.

If you find yourself in the situation where it would be useful to make conversion of scoped enumerators to integers 
easier, a useful hack is to overload the unary operator+ to perform this conversion:

*/


#include <iostream>
#include <type_traits> // for std::underlying_type_t

enum class Animals
{
    chicken, // 0
    dog, // 1
    cat, // 2
    elephant, // 3
    duck, // 4
    snake, // 5

    maxAnimals,
};



// 1. Overloaded the operator<<
// std::ostream& operator<<(std::ostream& out, Animals a)
// {
//     out << static_cast<std::underlying_type_t<Animals>>(a);
//     return out;
// }



// 1. Overloaded the operator<<
template <typename T>
std::ostream& operator<<(std::ostream& out, T a) noexcept
{
    return out << static_cast<std::underlying_type_t<T>>(a);
}



// Overload the unary + operator to convert an enum to the underlying type
// adapted from https://stackoverflow.com/a/42198760, thanks to Pixelchemist for the idea
// In C++23, you can #include <utility> and return std::to_underlying(a) instead
template <typename T>
constexpr auto operator+(T a) noexcept
{
    return static_cast<std::underlying_type_t<T>>(a);
}


int main()
{
    std::cout << Animals::elephant;// convert Animals::elephant to an integer using unary operator<<
    std::cout << std::endl;     // Since we have used function template and overloaded operator<< , 
                                // we can't do std::cout << '\n'; --> as it will call the overloaded operator instead
    std::cout << +Animals::elephant;// convert Animals::elephant to an integer using unary operator+

    return 0;
}