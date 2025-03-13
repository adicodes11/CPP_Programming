// Program to learn about classes in C++

#include <iostream>


// Class definition
class Employee
{
public:
    int m_id{};
    int m_age{};
    double m_wage{}; 
};

int main()
{   
    // Creating an Employee object
    Employee e1 {1, 22, 566000.0};

    std::cout << "Employee e1: \n";
    std::cout << "ID: " << e1.m_id << '\n';
    std::cout << "Age: " << e1.m_age << '\n';
    std::cout << "Salary: " << e1.m_wage << '\n';

    return 0;
}