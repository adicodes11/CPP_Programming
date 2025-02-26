/*

Write a function called calculate() that takes two integers and a char representing one of the following 
mathematical operations: +, -, *, /, or % (remainder). Use a switch statement to perform the appropriate 
mathematical operation on the integers, and return the result. If an invalid operator is passed into the 
function, the function should print an error message. For the division operator, do an integer division, 
and don’t worry about divide by zero.

*/

#include <iostream>

// Function to perform arithmetic operations
int calculate(int num1, int num2, char opr);


int main()
{
    int num1{};
    int num2{};
    char opr{};

    std::cout << "Enter number: ";
    std::cin >> num1;

    std::cout << "Enter another number: ";
    std::cin >> num2;

    std::cout << "Enter operator: ";
    std::cin >> std::ws >> opr;

    // Function call
    int result = calculate(num1, num2, opr);
    std::cout << num1 << " " << opr << " " << num2 << " = " << result << '\n';

    return 0;
}


// Function defintion
int calculate(int num1, int num2, char opr)
{
    switch(opr)
    {
        case '+':
            return (num1 + num2);
        case '-':
            return (num1 - num2);
        case '*':
            return (num1 * num2);
        case '/':
            return (num1 / num2);
        case '%':
            return (num1 % num2);
        default:
            std::cout << "Invalid operator!\n";
            return 0;
    }
}