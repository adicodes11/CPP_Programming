// Program to learn how PRNG mt19937 can be used to generate uniform distribution of random number generation for a dice roll simulator

#include <iostream>
#include <random>

#include <iostream>
#include <random> // for std::mt19937 and std::uniform_int_distribution

int main()
{
	std::mt19937 mt{};

	// Create a reusable random number generator that generates uniform numbers between 1 and 6
	std::uniform_int_distribution die6{ 1, 6 }; // for C++14, use std::uniform_int_distribution<> die6{ 1, 6 };

	// Print a bunch of random numbers
	for (int count{ 1 }; count <= 40; ++count)
	{
		std::cout << die6(mt) << '\t'; // generate a roll of the die here

		// If we've printed 10 numbers, start a new row
		if (count % 10 == 0)
			std::cout << '\n';
	}

	return 0;
}

/*

The above program isn’t as random as it seems

Although the results of our dice rolling example above are pretty random, there’s a major flaw with the program. Run the program 3 times and see if you can figure out what it is. Go ahead, we’ll wait.

Jeopardy music

If you run the program multiple times, you will note that it prints the same numbers every time! While each number in the sequence is random with regards to the previous one, the entire sequence is not random at all! Each run of our program produces the exact same result.

*/