/*

Write a class named Ball. Ball should have two private member variables, one to hold a color, and one to hold a radius. Also write a function to print out the color and radius of the ball.

The following sample program should compile:

int main()
{
	Ball blue { "blue", 10.0 };
	print(blue);

	Ball red { "red", 12.0 };
	print(red);

	return 0;
}
and produce the result:

Ball(blue, 10)
Ball(red, 12)

*/

#include <iostream>
#include <string>
#include <string_view>

class Ball
{
private:
    std::string m_color{};
    double m_radius{};

public:
    Ball(std::string_view color, double radius)
        : m_color {color}
        , m_radius {radius}
    {

    }

    void print() const
    {
        std::cout << "Ball(" << m_color << ", " << m_radius << ")" << '\n';
    }
};

int main()
{
    Ball blue{"blue",   10.0};
    blue.print();

    Ball red {"red", 12.0};
    red.print();

    return 0;
}



// Ideal solution - learncpp.com

/*

#include <iostream>
#include <string>
#include <string_view>

class Ball
{
private:
	std::string m_color { "none" };
	double m_radius { 0.0 };

public:
	Ball(std::string_view color, double radius)
		: m_color { color }
		, m_radius { radius }
	{
	}

	const std::string& getColor() const { return m_color; }
	double getRadius() const { return m_radius; }
};

void print(const Ball& ball)
{
    std::cout << "Ball(" << ball.getColor() << ", " << ball.getRadius() << ")\n";
}

int main()
{
	Ball blue { "blue", 10.0 };
	print(blue);

	Ball red { "red", 12.0 };
	print(red);

	return 0;
}

*/