// Program to print growing same line same number and character triangular pattern
/*

For n = 3;
Print: 
1
2 2 
3 3 3

For n = 3;
Print: 
A
B B
C C C

*/

#include<iostream>
#include<iomanip>   // For output formatting

using namespace std;

// Function to print the growing same line same integer triangular pattern
void printIntegerPattern(int size);

// Function to print the growing same line same character triangular pattern
void printCharpattern(int size);

int main()
{
    int n{};
    cout << "Enter pattern size: ";
    cin >> n;
    
    // Printing the growing same line same integer triangular pattern
    printIntegerPattern(n);
    cout << '\n';

    // Printing the growing same line same character triangular pattern
    printCharpattern(n);
    cout << '\n';
    
    return 0;
}
// Function to print the growing same line same integer triangular pattern
void printIntegerPattern(int size)
{
    for(int i = 1; i <= size; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << i << setw(3);
        }
        cout << '\n';
    }
}

// Function to print the growing same line same character triangular pattern
void printCharpattern(int size)
{
    char c = 'A';
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            cout << char(c + i) << setw(3);
        }
        cout << '\n';
    }
}
