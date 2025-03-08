// Program to print growing start triangle pattern
/*

For n = 5;
Print:
*
* *
* * *
* * * *
* * * * *

*/

#include<iostream>
using namespace std;

// Function to print the growing start triangle pattern
void printStarPattern(int size);

int main()
{
    int n{};
    cout << "Enter pattern size: ";
    cin >> n;
    
    // Printing the pattern
    printStarPattern(n);
    
    return 0;
}

// Function to print the growing start triangle pattern
void printStarPattern(int size)
{   
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << '\n';
    }
}