// Program to compute fibonacci series using recursion in C++

#include <iostream>
using namespace std;

// Function to compute fibonacci series
int fibonacci(int n);

int main()
{
    int n{};
    
    // Take the input for number of terms to compute of the fibonacci series
    cout << "Enter number of fibonacci terms to print: ";
    cin >> n;
    
    // Error handling for user input
    if(n < 0)
    {
        cout << "Error, enter a positive number!\n";
    }
    
    // Calling Function
    int term = fibonacci(n);
    cout << n << "th term of the fibonacci series is: " << term << "\n";


    // Printing the fibonacci series using loop
    cout << "Fibonacci series: ";
    for(int i = 0; i < n; i++)
    {
        cout << fibonacci(i) << " ";
    }
    cout << "\n";
    
    return 0;
}


// Function to compute fibonacci series
int fibonacci(int n)
{
    if(n == 0 || n == 1)
    {
        return n;
    }

    return fibonacci(n - 2) + fibonacci(n - 1);
}