// Program to learn the usage of loops in C++

#include<iostream>
using namespace std;

int main()
{
    // 1. while loop
    int i = 0;
    while(i < 10)
    {
        cout << "i: " << i << endl;
        i++;
    }
    cout << endl;


    // 2. do..while loop
    int j = 0;
    do
    {   
        cout << "j: " << j << endl;
        j++;
    } while(j < 10);
    cout << endl;


    // 3. for loop
    for(int i = 0; i < 10 ; i++)
    {
        cout << "for loop i: " << i << endl;
    }

    return 0;
}