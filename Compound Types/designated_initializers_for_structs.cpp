// Program to learn how to use designated intitializers for structures

#include <iostream>

struct Employee
{
    int id{};
    int age{};
    double wage{};
};

int main()
{
    Employee joe {.id = 1, .age = 22, .wage = 566000.0};
    // Employee joe {.id = 1, .wage = 566000.0, .age = 22};     // This is allowed in C but not in C++, as out of order intializers are not allowed in C++
    // error: initialization order does not match order of declaration in struct

    Employee frank{.id{2}, .wage{450000.0}};


    // We can perform intialization back like this again in C++
    joe = { joe.id, 33, 66000.0 }; 

    return 0;
}