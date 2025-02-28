#include <iostream>
#include <random> // for std::mt19937

int main()
{
    std::mt19937 mt{}; // Instantiate a 32-bit Mersenne Twister engine

    // Print a bunch of random numbers
    for (int count{1}; count <= 40; ++count)
    {
        std::cout << mt() << '\t'; // generate a random number
        // std::cout << mt.operator()() << '\t'; // generate a random number

        // If we've printed 5 numbers, start a new row
        if (count % 5 == 0)
            std::cout << '\n';
    }

    return 0;
}

/*
A 32-bit PRNG will generate random numbers between 0 and 4,294,967,295.

First, we include the <random> header, since that’s where all the random number capabilities live. 
Next, we instantiate a 32-bit Mersenne Twister engine via the statement std::mt19937 mt. 
Then, each time we want to generate a random 32-bit unsigned integer, we call mt().

As an aside…

Since mt is a variable, you may be wondering what mt() means.

In lesson 5.7 -- Introduction to std::string, we showed an example where we called the function name.length(), 
which invoked the length() function on std::string variable name.

mt() is a concise syntax for calling the function mt.operator(), which for these PRNG types has been defined 
to return the next random result in the sequence. The advantage of using operator() instead of a named function 
is that we don’t need to remember the function’s name, and the concise syntax is less typing.

*/