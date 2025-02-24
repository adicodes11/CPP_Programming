// Program to learn the concept and usage of strings in C++

/*

* Strings in C++ are defined under the <string> library
* However, some coding environments and compilers may support using strings directly without including
  the <string> library, but this is very susceptable to program's portability, and thus one should
  always include the <string> library when dealing with strings in C++

* Strings in C++ are objects, and are same as that in C in some manner (like, they are char arrays terminated by a NULL character)

*/

#include <iostream>
#include <string> // Strings in C++, as well as related string functions are defined under the <string> library

using namespace std;

int main()
{
    // 1. String declaration
    string str1;

    // String declaration + intialization
    string str2 = "This is a string";
    str2 = "We can do direct intialization later too, unlike that in C!";

    cout << "str2: " << str2 << '\n';


    // 2. Operations with strings
    // 
    // 2.1.1 Getting the size of the string
    cout << "size: " << str2.size() << endl;

    // 2.1.2 Getting the length of the string
    cout << "length: " << str2.length() << '\n';

    // 2.2 We can access individual characters in a string through the
    //    index number of each character in the string (Just like in C)
    cout << "str2[0]: " << str2[0] << '\n';
    cout << "str2[1]: " << str2[1] << '\n';
    cout << "str2[2]: " << str2[2] << '\n';
    cout << "str2[3]: " << str2[3] << '\n';
    cout << "str2[4]: " << str2[4] << '\n';
    cout << "str2[5]: " << str2[5] << '\n';
    cout << '\n';
    
    // 2.3 We can use the at() function to access the value at certain index of the string
    cout << "str2.at(0): " << str2.at(0) << '\n';
    cout << "str2.at(1): " << str2.at(1) << '\n';
    cout << "str2.at(2): " << str2.at(2) << '\n';
    cout << "str2.at(3): " << str2.at(3) << '\n';
    cout << "str2.at(4): " << str2.at(4) << '\n';
    cout << "str2.at(5): " << str2.at(5) << '\n';
    cout << '\n';

    // 2.4 We can change value at individual index
    str2[3] = 'A'; 
    cout << "str2[3]: " << str2[3] << '\n';


    // 
    // 3. String Append (There are multiple ways to do this)
    // 
    // 3.1.1 Direct append
    str2 = str2 + "There's always more that can be done.";
    cout << "After append-1: " << str2 << '\n';
    
    // 3.1.2 Direct append-2
    // str2 += "There's always more that can be done.";   
    // cout << "After append-1: " << str2 << '\n';

    // 3.2 Using append() function
    str2.append("And More and more...");
    cout << "After append-2: " << str2 <<'\n';

    
    // 
    // 4. String Concatenation
    // We can concatenate two strings 
    string s1 = "This";
    string s2 = "That";
    string s3 = s1 + s2;

    cout << "s3: " << s3 << '\n';


    // 
    // 5. Check if a string is empty using the empty() function
    string sd;
    cout << "Empty string: " << sd.empty() << '\n';
    if(s3.empty())
    {
        cout << "String is empty\n";
    }
    else
    {
        cout << "String is not empty\n";
    }


    // 
    // 6. We can clear/ empty a string using the clear() function
    sd = "Content added";
    cout << "Before clearing: " << sd << '\n';
    sd.clear();
    cout << "After clearing: " << sd << '\n';
    cout << (int)sd[0] << '\n';     // clear() function just puts a \0 character at the first index of the string to terminate or say clear the string
    cout << sd[1] << "\n\n"; 

    return 0;
}