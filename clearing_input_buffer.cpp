// Program to learn how to clear input buffer in C++

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int age{};
    cout << "Enter a age: ";
    cin >> age;

    string name{};
    cout << "Enter your name: ";
    getline(cin, name);
    

    // Outputting values
    cout << "age: " << age << '\n';
    cout << "name: " << name << '\n';


    return 0;
}