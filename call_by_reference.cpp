// Program to learn the concept of call by reference in C++

#include<iostream>
using namespace std;


// Function to swap numbers
// void swap(int *a, int *b);       // It was what introduced by C, pass by reference method
void swap(int &a, int &b);


int main()
{
    int a = 4;
    int b = 5;
    cout << "Before:\n";
    cout << "a: " << a << "\n";
    cout << "b: " << b << "\n";
    
    // swap(&a, &b);            // It was what introduced by C (pass by address or pointer), pass by reference method, 
                                // but C++ has introduced the concept of reference variables, 
                                // with the help of which pass by reference can be done
                                
    swap(a, b);                 // <----- Pass by reference
    cout << "After:\n";
    cout << "a: " << a << "\n";
    cout << "b: " << b << "\n";
    
    return 0;
}


// Function to swap numbers
void swap(int &a, int &b)
{
    int temp = 0;

    temp = a;
    a = b;
    b = temp;
}