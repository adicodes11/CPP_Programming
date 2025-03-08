// Program to print continuous square pattern
/*

For n = 3;
Print:
        1 2 3
        4 5 6
        7 8 9

For n = 4;
Print:
        1   2   3   4
        5   6   7   8
        9   10  11  12
        13  14  15  16

*/

#include<iostream>
#include<iomanip>   // For print formatting
using namespace std;

// Function to print continous integer square pattern
void printIntSquarePattern(int size);

// Function to print continous character square pattern
void printCharSquarePattern(int size);

int main()
{
    int n{};
    cout << "Enter pattern size: ";
    cin >> n;
    
    // Printing continous integer square pattern
    printIntSquarePattern(n);
    cout << '\n';

    // Printing continous character square pattern
    printCharSquarePattern(n);
    cout << '\n';

    return 0;
}

// Function to print continous integer square pattern
void printIntSquarePattern(int size)
{
    int num{1};
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            cout << setw(4) << num << " ";
            num++;
        }
        cout << '\n';
    }
}

// Function to print continous character square pattern
void printCharSquarePattern(int size)
{
    char c = 'A';
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            cout << c << " ";
            c++;
        }
        cout << '\n';
    }
}