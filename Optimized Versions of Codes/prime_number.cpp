#include <cassert>
#include <cmath> // for std::sqrt
#include <iostream>

// optimized version
bool isPrime(int x)
{
    if (x <= 1)     // if x is negative, 0, or 1 then the number is not prime
        return false;
    if (x == 2)     // the number 2 is the only even prime
        return true;
    if (x % 2 == 0) // any other even number is not prime
        return false;

    // For any number 3 or greater, test odd values (this is why we add 2)
    // between 3 and sqrt(x) to see if they are a divisor
    // Also see https://stackoverflow.com/questions/5811151/why-do-we-check-up-to-the-square-root-of-a-number-to-determine-if-the-number-is
    // Since test >= 0 and x >=0, we can optimize test < std::sqrt(x) to test * text < x
    for (int test{ 3 }; test * test <= x; test += 2)
    {
        if (x % test == 0) // if x is evenly divisible
            return false;  // then this number isn't prime
    }

    return true; // if we didn't find any divisors, then x must be prime
}

int main()
{
    assert(!isPrime(0));
    assert(!isPrime(1));
    assert(isPrime(2));
    assert(isPrime(3));
    assert(!isPrime(4));
    assert(isPrime(5));
    assert(isPrime(7));
    assert(!isPrime(9));
    assert(isPrime(11));
    assert(isPrime(13));
    assert(!isPrime(15));
    assert(!isPrime(16));
    assert(isPrime(17));
    assert(isPrime(19));
    assert(isPrime(97));
    assert(!isPrime(99));
    assert(isPrime(13417));

    std::cout << "Success!\n";

    return 0;
}