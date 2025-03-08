#include <iostream>

template <typename T>
struct Pair
{
    T first{};
    T second{};
};

template <typename T>
T max(Pair<T> p)
{
    return (p.first < p.second ? p.second : p.first);
}

int main()
{
    Pair p1{ 5, 6 };
    std::cout << max(p1) << " is larger\n";
    std::cout << max(p1) << " is larger\n";
    
    Pair p2{ 1.2, 3.4 };
    std::cout << max(p2) << " is larger\n";
    std::cout << max(p2) << " is larger\n";

    return 0;
}