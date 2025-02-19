// Program to learn the usage of loops in C++

/*

* Loops:
    Loops are looping control structures used to repeatedly execute a particular block of code, until a certain condition is met

* Types of loops in C++:
    1. while loop
    2. do...while loop
    3. for loop
    4. for-each loop

*/

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

    
    // 4. for-each loop
    

    return 0;
}