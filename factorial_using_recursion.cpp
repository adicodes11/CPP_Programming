// Program to find factorial of a number using recursion in C++

#include<iostream>
using namespace std;

// Function to compute factorial using recursion
int factorial(int num);

int main()
{
    int num{};
    
    cout << "Enter a positive number: ";
    cin >> num;
    
    if(num < 0)
    {
        cout << "Enter a positive number!\n";
        return 1;
    }

    int fact = factorial(num);
    cout << "Factorial of " << num << " is: " << fact << "\n";
    
    return 0;
}

// Function to compute factorial using recursion
int factorial(int num)
{
    if(num == 1 || num == 0)
    {
        return 1;
    }

    return num * factorial(num - 1);
}