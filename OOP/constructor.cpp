// Program to learn about constructors in C++

/*

* Constructor:
    A constructor is a special member function that is automatically invoked after the intialization of the class.

*/


#include <iostream>

class Foo
{
    int m_x{};
    int m_y{};

public: 
    Foo()
    {
        std::cout << "Do something!\n";
    }

    Foo(int x, int y)
    {
        m_x = x;
        m_y = y;
        std::cout << "Do something!\n";
    }

    void print()
    {
        std::cout << "(" << m_x << ", " << m_y << ")" << '\n';
    }
};  

int main()
{
    // Foo foo{1, 2};
    Foo foo;
    foo.print();

    return 0;
}