/*

* Initializing a struct with another struct of the same type
A struct may also be initialized using another struct of the same type:

*/

#include <iostream>

struct Foo
{
    int a{};
    int b{};
    int c{};
};

std::ostream& operator<<(std::ostream& out, const Foo& f)
{
    out << f.a << ' ' << f.b << ' ' << f.c;
    return out;
}

int main()
{
    Foo foo { 1, 2, 3 };

    Foo x = foo; // copy-initialization
    Foo y(foo);  // direct-initialization
    Foo z {foo}; // direct-list-initialization

    std::cout << x << '\n';
    std::cout << y << '\n';
    std::cout << z << '\n';

    return 0;
}