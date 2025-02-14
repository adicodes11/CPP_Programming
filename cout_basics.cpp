// Program to learn the basics of cout in C++

/*

* cout is part of the <iostream> library
* cout is a stream object, which means, it works with streams of data
* cout is called as the standard output stream object, which means that it outputs data to the console by default
* << is called as the stream insertion operator, which is used to insert in streams of data onto the output stream


*/

#include<iostream>
using namespace std;

int main()
{
    // 1.
    cout << "Hi, Aditya Chikte here\n";

    // 2. New line can be placed using the endl operator (It is one of the string manipulator)
    cout << "There goes next line" << endl;
    cout << "One more line\n";          // \n escape sequence can be used too
    cout << "One more line" << endl;


    // 3. We can concatenate the output from cout this way, i.e., we can chanin insertion operators 
    cout << "Learning to use " << "the cout object" << endl;
    cout << "Line 1" << endl << "Line 2" << endl;


    // 4. Outputting variables
    int a = 40;
    cout << "a: " << a << endl;

    // cout allows us to output dynamic content in continuos sequence, rather than the right side one like the printf() function in C
    int age = 45;
    cout << "His father is " << age << " years old." << endl;


    return 0;
}