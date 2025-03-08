// Program to overload the operator<< to allow printing structures

#include <iostream>

// Structure
struct Employee
{
    int id{};
    int age{};
    double wage{};
};


// Overloading the operator<<
std::ostream& operator<<(std::ostream& out, Employee& e)
{
    out << "ID: " << e.id << '\n';
    out << "Age: " << e.age << '\n';
    out << "Wage: " << e.wage << '\n';

    return out;
}

int main()
{
    Employee joe {1, 22, 566000.0};

    // Outputting the structre
    std::cout << "Joe Details: \n";
    std::cout << joe << '\n';


    return 0;
}