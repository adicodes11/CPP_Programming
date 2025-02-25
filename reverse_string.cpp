// Program to reverse a string

#include <iostream>
#include <string>
#include <algorithm>  // For using the reverse() function
#include <cstring>    // For C styled string functions

/*

* To reverse a string, we can make use of the reverse function provided under the <algorithm> header.
* We need to pass reverse() function the range of characters to reverse. This can be done using iterators or the at() function
* Syntax: 

*/

using namespace std;

int main()
{
    string str{"This is a new string!"};

    // Reversing the string
    // reverse(str.at(0), str.at(str.size()));  // It can be used to, but for simplicity, we use the below iterator method
    reverse(str.begin(), str.end());
    cout << "str: " << str << '\n';


    // We can also use the reverse function with C-style strings
    char cStr[] = "This is a C-style string";
    reverse(cStr, cStr + strlen(cStr));
    cout << "cStr: " << cStr << "\n";

    return 0;
}