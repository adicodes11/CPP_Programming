// Program to learn range-based for loop in C++

/*

* Range-based for loop is a variant of for loop in C++
* It is also called as for-each loop
* It is used to iterate over a collection
* Syntax: for(data_type variable_name : container_name)
          {
              // Operations using variable_name  
          }

* The for-each loop can be used with all the contagious container types, such as: arrays of any type, list, vectors

*/

#include <iostream>

using namespace std;

int main()
{
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for(int element : array)
    {
        cout << element << endl;
    }
    cout << '\n';
    
    // OR just do as we often do normally when using for loop
    for(int i : array)
    {
        cout << i << endl;
    }
    cout << '\n';
    
    
    // To print only some part of the array, we need to do this instead
    for(int element : {1, 2, 3, 4, 5})
    {
        cout << element << endl;
    }
    cout << '\n';


    // Note this:
    int score[10] = {89, 98, 90, 60, 66};   // We have intialized only 5 elements
    for(int i : score)
    {
        cout << i << " ";
    }

    return 0;

}