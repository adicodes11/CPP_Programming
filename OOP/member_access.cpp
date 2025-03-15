// Program to learn about the member access in C++

#include <iostream>

class Apple
{
public:
    void printA()
    {
        std::cout << "a: " << a << '\n';
    }

protected:
    int a{20};

};

int main()
{
    Apple apple;
    // std::cout << "a: " << apple.a;

    apple.printA();

    return 0;
}