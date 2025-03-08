// Program to learn how to take in user input for unscoped enumeration using strings (enumerator strings), and convert these enumerator strings to appropriate 
// enumerator integral values

#include <iostream>
#include <string>
#include <string_view>
#include <optional>

enum Pet
{
    pig,
    whale,
    dog,
    cat,
};

// Function to convert integral enumerator values to string enumerator 
std::string_view getPetName(Pet pet)
{
    switch(pet)
    {
        case 0: return "pig";
        case 1: return "whale";
        case 2: return "dog";
        case 3: return "cat";
        default: return "???";
    }
}


// Function to convert input string into enumerator's integral values
std::optional<Pet> getPetFromString(std::string_view petStr)
{
    if(petStr == "pig")     return pig;
    if(petStr == "whale")   return whale;
    if(petStr == "dog")     return dog;
    if(petStr == "cat")     return cat;

    // If none of the above matches then return std::optional
    return std::nullopt;
    return {};  // same as above
}

int main()
{
    std::string petStr{};
    std::cout << "Enter pet: ";
    std::cin >> petStr;


    std::optional<Pet> myPet {getPetFromString(petStr)};

    // Checking
    std::cout << "My pet is " << getPetName(*myPet);
    

    return 0;
}