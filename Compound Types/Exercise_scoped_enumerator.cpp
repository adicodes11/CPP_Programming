/*

Define an enum class named Animal that contains the following animals: pig, chicken, goat, cat, dog, duck. 
Write a function named getAnimalName() that takes an Animal parameter and uses a switch statement to return 
the name for that animal as a std::string_view (or std::string if you’re using C++14). Write another function 
named printNumberOfLegs() that uses a switch statement to print the number of legs each animal walks on. 
Make sure both functions have a default case that prints an error message. Call printNumberOfLegs() from 
main() with a cat and a chicken. Your output should look like this:

OUTPUT:
A cat has 4 legs.
A chicken has 2 legs.

*/

#include <iostream>
#include <string>
#include <string_view>

enum class Animal
{
    cat,
    chicken,
    dog,
    duck,
    goat,
    pig,
};

// Function to print enumerators as named strings
std::string_view getAnimalName(Animal a)
{
    // my Approach
    // switch(static_cast<int>(a))
    // {
    //     case 0:   return "cat";
    //     case 1:   return "chicken";
    //     case 2:   return "dog";
    //     case 3:   return "duck";
    //     case 4:   return "goat";
    //     case 5:   return "pig";
    //     default:  return "???";
    // }
    
    
    
    // learncpp.com Approach
    switch(a)
    {
        case Animal::cat:       return "cat";      
        case Animal::chicken:   return "chicken";
        case Animal::dog:       return "dog";
        case Animal::duck:      return "duck";
        case Animal::goat:      return "goat";
        case Animal::pig:       return "pig";
        default:                return "???";
    }
}


// Function that returns the number of legs for enum class Animal enumerators
int printNumberOfLegs(Animal a)
{
    // My Approach
    // switch(static_cast<int>(a))
    // {
    //     case 0:   return 4;
    //     case 1:   return 2;
    //     case 2:   return 4;
    //     case 3:   return 2;
    //     case 4:   return 4;
    //     case 5:   return 4;
    //     default:  return 0;
    // }


    // learncpp.com Approach
    switch(a)
    {
        case Animal::cat:       return 4;      
        case Animal::chicken:   return 2;
        case Animal::dog:       return 4;
        case Animal::duck:      return 2;
        case Animal::goat:      return 4;
        case Animal::pig:       return 4;
        default: return 0;
    }

}

int main()
{
    Animal a1{Animal::cat};
    Animal a2 {Animal::chicken};

    std::cout << "A " << getAnimalName(a1) << " has " << printNumberOfLegs(a1) << " legs." << '\n';
    std::cout << "A " << getAnimalName(a2) << " has " << printNumberOfLegs(a2) << " legs." << '\n';

    return 0;
}