// Program to learn the concept of while loop using an example

#include <iostream>

int main()
{
    char c{'a'};

    while(c <= 'z')
    {
        std::cout << c << " - " << (int) c << '\n';
        c++;
    }

    return 0;
}