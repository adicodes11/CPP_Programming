/*

a) Write a class named Point3d. The class should contain:

Three private member variables of type int named m_x, m_y, and m_z;
A public member function named setValues() that allows you to set values for m_x, m_y, and m_z.
A public member function named print() that prints the Point in the following format: <m_x, m_y, m_z>
Make sure the following program executes correctly:

int main()
{
    Point3d point;
    point.setValues(1, 2, 3);

    point.print();
    std::cout << '\n';

    return 0;
}
This should print:

<1, 2, 3>

*/


#include <iostream>

class Point3d
{
private: 
    int m_x{};
    int m_y{};
    int m_z{};

public:
    void setValues(int x,  int y, int z)
    {
        m_x = x;
        m_y = y;
        m_z = z;
    }

    void getValues()
    {
        std::cout << "(" << m_x << ", " << m_y << ", " << m_z << ")" << '\n';
    }

    bool isEqual(Point3d p)
    {
        if((m_x == p.m_x) && (m_y == p.m_y) && (m_z == p.m_z))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
	Point3d point1{};
	point1.setValues(1, 2, 3);

	Point3d point2{};
	point2.setValues(1, 2, 3);

	std::cout << "point 1 and point 2 are" << (point1.isEqual(point2) ? "" : " not") << " equal\n";

	Point3d point3{};
	point3.setValues(3, 4, 5);

	std::cout << "point 1 and point 3 are" << (point1.isEqual(point3) ? "" : " not") << " equal\n";

	return 0;
}