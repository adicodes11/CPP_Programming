// Write a program to implement fizzbuzz game in C++

/*

Fizz Buzz is a simple math game used to teach children about divisibility. It is also sometimes used as an
interview question to assess basic programming skills.

The rules of the game are simple: Starting at 1, and counting upward, replace any number divisible only
by three with the word “fizz”, any number only divisible by five with the word “buzz”, and any number
divisible by both 3 and 5 with the word “fizzbuzz”.

Implement this game inside a function named fizzbuzz() that takes a parameter determining what
number to count up to. Use a for-loop and a single if-else chain (meaning you can use as many else-if as you like).

Modify the FizzBuzz program you wrote in the previous quiz to add the rule that numbers divisible by seven should be replaced with “pop”. Run the program for 150 iterations.

In this version, using an if/else chain to explicitly cover every possible combination of words will result in a function that is too long. Optimize your function so only 4 if-statements are used: one for each of the non-compound words (“fizz”, “buzz”, “pop”), and one for the case where a number is printed.

Here are some snippets of the expected output:

4
buzz
fizz
pop
8

19
buzz
fizzpop
22

104
fizzbuzzpop
106



*/

#include <iostream>

// Function declaration
int fizzbuzz(int num);

int main()
{
    int num{};

    std::cout << "Enter a number: ";
    std::cin >> num;

    fizzbuzz(num);

    return 0;
}

// Function definition
int fizzbuzz(int num)
{
    for (int i = 1; i <= num; i++)
    {
        if (i % 3 == 0)
        {
            std::cout << "fizz";
        }
        if (i % 5 == 0)
        {
            std::cout << "buzz";
        }
        if (i % 7 == 0)
        {
            std::cout << "pop";
        }
        if((i % 3 != 0) && (i % 5 != 0) && (i % 7 != 0))
        {
            std::cout << i;
        }

        std::cout << '\n';
    }

    return 1;
}