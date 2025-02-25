// Program to learn the concept of erasing string in C++

/*

* To erase/remove certain number of characters from a string, we can make use of the erase() function provided by the <string> header
* Syntax: string_name.erase(pos_index, N);
    Here, N is the number of characters to remove starting from the pos_index

* In case, when the value of N is passed beyond the length or number of characters in the string, it's ok, it won't cause issue, simply all the characters
  from the specified index to the last character in the string would be removed

* Also, if we don't provide the any argument, by default, the pos_index argument will be set to 0, i.e., the first index of the string. This will result in 
  the complete string being erased

* If we do provide one argument, this argument will be treated as the specification for pos_index, and thus string from the specified index to the last character
  of the string will be removed

*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str{"This is a new string, good enough!"};

    // Erasing str
    str.erase(2, 6);
    cout << "str: " << str << '\n';

    // str.erase(2, 100);
    // cout << "str: " << str << '\n';

    // By default
    str.erase();
    cout << "str: " << str << '\n';

    // Passing only one argument in erase() function
    str = "This is a new string, good enough!";
    str.erase(5);   
    cout << "str: " << str << '\n';

    // But in this case:
    str = "This is a new string, good enough!";
    str.erase(str.begin() + 5);   // Unlike above, it just removes the character at the specified index, due to the use of iterator
    cout << "str: " << str << '\n';
    
    // Such versions of the erase() function that makes use of iterators return the character that now occupies the position of the removed character
    str = "This is a new string, good enough!";
    auto iter = str.erase(str.begin() + 5);  
    cout << "iter: " << *iter << '\n';


    return 0;
}