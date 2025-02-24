// Program to print a same line increasing integer and character pattern
/*

For n = 4;
Print:
1
1 2
1 2 3 
1 2 3 4

For n = 4;
Print:
A
A B 
A B C
A B C D

*/

#include<iostream>
#include<iomanip>

using namespace std;

// Function to print the integer pattern
void printIntegerPattern(int size);

// Function to print the character pattern
void printCharPattern(int size);

int main()
{
    int n{};
    cout << "Enter the pattern size: ";
    cin >> n;

    // Printing the integer pattern
    printIntegerPattern(n);
    cout << '\n';

    // Printing the character pattern
    printCharPattern(n);

    return 0;
}

// Function to print the integer pattern
void printIntegerPattern(int size)
{
    for(int i = 1; i <= size; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << j << setw(3);
        }
        cout << '\n';
    }
}

// Function to print the character pattern
void printCharPattern(int size)
{
    char c = 'A';
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            cout << char (c + j) << setw(3);
        }
        cout << '\n';
    }
}