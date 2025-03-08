/*

Create a struct to hold a fraction. The struct should have an integer numerator and an integer denominator member.

Write a function to read in a Fraction from the user, and use it to read-in two fraction objects. Write another function to multiply two Fractions together and return the result as a Fraction (you don’t need to reduce the fraction). Write another function that prints a fraction.

Your program’s output should match the following:

Enter a value for the numerator: 1
Enter a value for the denominator: 2

Enter a value for the numerator: 3
Enter a value for the denominator: 4

Your fractions multiplied together: 3/8
When multiplying two fractions together, the resulting numerator is the product of the two numerators, and the resulting denominator is the product of the two denominators.

*/

#include <iostream>

// Structure
struct Fraction
{
    int numerator{0};
    int denominator{1};     //Performed error handling here itself
};

// Function to make inputs for Fraction
Fraction getFractionValue()
{
    Fraction temp{};

    std::cout << "Enter the numerator: ";
    std::cin >> temp.numerator;

    std::cout << "Enter the denominator: ";
    std::cin >> temp.denominator;

    return temp;
}


// Function to perform fraction multiplication for two Fractions
Fraction multiplyFraction(Fraction& f1, Fraction& f2)
{
    return {f1.numerator * f2.numerator, f1.denominator * f2.denominator};
}

void printFraction(const Fraction& f)
{
    std::cout << "Your fractions multiplied together: " << f.numerator << '/' << f.denominator << '\n';
}

int main()
{
    Fraction f1{getFractionValue()};
    Fraction f2{getFractionValue()};

    Fraction result{multiplyFraction(f1, f2)};

    // Printing the multiplication result
    printFraction(result);
    

    return 0;
}