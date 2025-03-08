// Program to learn the concept of structures in C++

#include <iostream>

// 1. Defining structure
struct Employee
{
    int empID{};
    std::string empName{};
    int age{};
    double wage{};
};

int main()
{
    // 2. Defining struct objects
    Employee joe{};

    std::cout << "ID: " << joe.empID << '\n';
    std::cout << "Name: " << joe.empName << '\n';
    std::cout << "Age: " << joe.age << '\n';
    std::cout << "Wage: " << joe.wage << '\n';

    return 0;
}