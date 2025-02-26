#include <iostream>

int main()
{
    int size{};

    std::cout << "Enter pattern size: ";
    std::cin >> size;


    int outer{1};
    while(outer <= size)
    {
        int inner{5};
        int num{inner + 1 - outer};
        while(inner >= outer)
        {
            std::cout << num << " ";
            inner--;
            num--;
        }
        std::cout << '\n';
        outer++;
    }
}