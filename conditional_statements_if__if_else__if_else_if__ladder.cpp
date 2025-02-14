// Program to learn the usage of conditional statements - if, if-else, if else-if ladder and nested ocnditional statements in C++

#include<iostream>
using namespace std;

int main()
{
    int age = 0;
    
    cout << "Enter age: ";
    cin >> age;

    if(age >= 18)
    {
        cout << "You are eligible to vote\n";
    }
    else
    {
        cout << "You are not eliigible to vote!\n";
    }


    // if else-if ladder
    cout << "Enter age again: ";
    cin >> age;

    if(age < 0)
    {
        cout << "Invalid age!\n";
    }
    else if(age >= 18)
    {
        cout << "You are eligible to vote\n";
    }
    else
    {
        cout << "You are not eliigible to vote!\n";
    }


    // Nested conditional statements 
    

    return 0;
}