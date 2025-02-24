// Program to print Floyd's Triangle
/*

For n = 4;
Print:
1
2 3
4 5 6
7 8 9 10

For n = 4;
Print: 
A
B C 
D E F
G H I J

*/

#include<iostream>
#include<iomanip> // For output formatting

using namespace std;

// Function to print Floyd's triangle for integers
void printIntegerFloydTriangle(int size);

// Function to print Floyd's triangle for characters
void printCharFloydTriangle(int size);

int main()
{
    int n{};
    cout << "Enter pattern size: ";
    cin >> n;

    // Printing Floyd's triangle for integers
    printIntegerFloydTriangle(n);
    cout << '\n';

    // Printing Floyd's triangle for integers
    printCharFloydTriangle(n);
    cout << '\n';
    
    return 0;
}

// Function to print Floyd's triangle for integers
void printIntegerFloydTriangle(int size)
{
    int num = 1;
    for (int i = 0; i < size; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            cout << num << setw(3);
            num++;
        }
        cout << '\n';
    }
}

// Function to print Floyd's triangle for characters
void printCharFloydTriangle(int size)
{
    char c = 'A';
    for (int i = 0; i < size; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            cout << c << setw(3);
            c++;
        }
        cout << '\n';
    }
}