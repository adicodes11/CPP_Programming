// Program to learn overloading operator<< tp print the enumerations directly

// My Approach -->

// #include <iostream>

// enum Pet
// {
//     cat,
//     dog,
//     pig,
//     whale,
// };


// // Overloading operator<< function
// // Teach operator<< how to print a Color
// // std::ostream is the type of std::cout, std::cerr, etc...
// // The return type and parameter type are references (to prevent copies from being made)
// std::ostream& operator<<(std::ostream& out, Pet pet)
// {
//     switch(pet)
//     {
//         case 0:
//             out << "cat";
//             return out;
//         case 1:
//             out << "dog";
//             return out;
//         case 2:
//             out << "pig";
//             return out;
//         case 3:
//             out << "whale";
//             return out;
//         default:
//             out << "???";
//             return out;
//     }

//     // The above can be condensed to the following single line:
//     // return out << "cat";
// }

// int main()
// {
//     Pet pet{dog};
//     std::cout << "My pet is " << pet << '\n';

//     return 0;
// }




// Perfect Code by learncpp.com-->

#include <iostream>
#include <string_view>

enum Color
{
	black,
	red,
	blue,
};

constexpr std::string_view getColorName(Color color)
{
    switch (color)
    {
    case black: return "black";
    case red:   return "red";
    case blue:  return "blue";
    default:    return "???";
    }
}

// Teach operator<< how to print a Color
// std::ostream is the type of std::cout, std::cerr, etc...
// The return type and parameter type are references (to prevent copies from being made)
std::ostream& operator<<(std::ostream& out, Color color)
{
    out << getColorName(color); // print our color's name to whatever output stream out
    return out;                 // operator<< conventionally returns its left operand

    // The above can be condensed to the following single line:
    // return out << getColorName(color)
}

int main()
{
	Color shirt{ blue };
	std::cout << "Your shirt is " << shirt << '\n'; // it works!

	return 0;
}