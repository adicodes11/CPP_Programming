// Program to learn how to convert an enumerator to a string

#include <iostream>
#include <string_view>

enum Color
{
    red,
    green,
    blue,
};

// 1. Function that returns string based on enumerator value
std::string_view enumeratorToString(Color color)
{
    switch(color)
    {
        case 0:  return "red";
        case 1:  return "green";
        case 2:  return "blue";
        default: return "invalid";
    }
}

int main()
{
    // 1. We can do so using a function that will return appropriate string based on enumerator value
    Color shirt{blue};
    // The below prints enumerator as implicit integral value
    std::cout << "shirt is " << shirt << " in color.\n";
    std::cout << "shirt is " << enumeratorToString(shirt) << " in color.\n";

    return 0;
}