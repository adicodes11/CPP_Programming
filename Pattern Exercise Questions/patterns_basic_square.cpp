// Program to print square pattern
/*

For n = 4;
Print:
        1 2 3 4
        1 2 3 4
        1 2 3 4
        1 2 3 4

For n = 4;
print:
        A B C D
        A B C D
        A B C D
        A B C D

*/

#include<iostream>
using namespace std;

// Function to print basic integer square pattern
void printIntSquarePattern(int size);

// Function to print basic character square pattern
void printCharSquarePattern(int size);

int main()
{
    int n;
    cout << "Enter pattern size: ";
    cin >> n;
    
    // Printing integer square pattern
    printIntSquarePattern(n);
    cout << '\n';
    
    // Printing character square pattern
    printCharSquarePattern(n);
    
    return 0;
}

// Function to print basic square pattern
void printIntSquarePattern(int size)
{
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            cout << j + 1 << " ";
        }
        cout << '\n';
    }
}

// Function to print basic character square pattern
void printCharSquarePattern(int size)
{
    for(int i = 0; i < size; i++)
    {
        char c = 'A';
        for(int j = 0; j < size; j++)
        {
            cout << char (c + j) << " ";
        }
        cout << '\n';
    }
}