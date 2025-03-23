// Program to learn the concept of member intializer list

#include <iostream>

class Foo
{
private:
    int m_x{};
    int m_y{};

public:
    Foo(int x, int y)
        : m_x{x}, m_y{y}
    {
        std::cout << "(" << m_x << ", " << m_y << ")" << '\n';
    }
};

int main()
{
    Foo foo{6, 7};

    return 0;
}