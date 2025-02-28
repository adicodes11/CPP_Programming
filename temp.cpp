#include <iostream>

int main()
{
    int a{5};
    int &b{a};

    std::cout << "a: " << a << '\n';
    std::cout << "b: " << b << '\n';

    int c = 20;

    return 0;
}