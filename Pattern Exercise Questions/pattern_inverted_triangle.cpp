// Program to print inverted triangle
/*

For n = 4;
Print:
1 1 1 1
  2 2 2
    3 3
      4

For n = 4;
Print:
A A A A
  B B B
    C C
      D

*/

#include <iostream>
#include <iomanip> // For output formatting

using namespace std;

// Function to print inverted triangle for integers
void printInvertedIntegerTriangle(int size);

// Function to print inverted triangle for characters
void printInvertedCharacterTriangle(int size);

int main()
{
    int n{};
    cout << "Enter pattern size: ";
    cin >> n;

    // Printing integer pattern
    printInvertedIntegerTriangle(n);
    cout << '\n';

    // Printing character pattern
    printInvertedCharacterTriangle(n);
    cout << '\n';

    return 0;
}

// Function to print inverted triangle for integers
void printInvertedIntegerTriangle(int size)
{
    for (int i = 0; i < size; i++)
    {
        // Spaces
        for (int j = 0; j < i; j++)
        {
            cout << " " << setw(4);
        }

        // Characters
        for (int k = size; k > i; k--)
        {
            cout << (i + 1) << setw(4);
        }

        // Newline
        cout << '\n';
    }
}

// Function to print inverted triangle for characters
void printInvertedCharacterTriangle(int size)
{
    char c = 'A';
    for (int i = 0; i < size; i++)
    {
        // Spaces
        for (int j = 0; j < i; j++)
        {
            cout << " " << setw(4);
        }

        // Characters
        for (int k = size; k > i; k--)
        {
            cout << char(c + i) << setw(4);
        }

        // Newline
        cout << '\n';
    }
}