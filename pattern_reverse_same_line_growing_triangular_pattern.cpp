// Program to print reversed same line growing triangular pattern
/*

For n = 4;
Print:
1
2 1
3 2 1
4 3 2 1

For n = 4;
Print:
A
B A
C B A
D C B A

*/

#include <iostream>
#include <iomanip> // For output formatting

using namespace std;

// Function to print reversed integer pattern
void printReversedIntegerPattern(int size);

// Function to print reversed character pattern
void printReversedCharPattern(int size);

int main()
{
    int n{};
    cout << "Enter pattern size: ";
    cin >> n;

    // Printing integer pattern
    printReversedIntegerPattern(n);
    cout << '\n';

    // Printing character pattern
    printReversedCharPattern(n);
    cout << '\n';

    return 0;
}

// Function to print reversed integer pattern
void printReversedIntegerPattern(int size)
{
    for (int i = 1; i <= size; i++)
    {
        for (int j = i; j >= 1; j--)
        {
            cout << j << setw(3);
        }
        cout << '\n';
    }
}

// Function to print reversed character pattern
void printReversedCharPattern(int size)
{
    char c = 'A';
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j >= 0; j--)
        {
            cout << char(c + j) << setw(3);
        }
        cout << '\n';
    }
}