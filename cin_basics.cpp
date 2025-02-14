// Program to learn the basics of cin in C++

/*

* The cin object is part of the <iostream> library
* The cin object stands for character input
* It is known as the stream object used to perform inputs
* Also called as the input stream object, cin inputs data from othe input stream to the main memory
* It is also called as the standard input stream object, which means that it takes input from the console by default
* cin makes use of the stream extraction operator (>>)

* The cin.clear() function and the cin.ignore() function let's us deal with errors related with the cin object, and helps
  us make our programs and inputs more robust


* Just like the scanf() function, cin object can't capture whitespaces
* We can make use of the getline() function to takein string inputs

*/

#include<iostream>
using namespace std;

int main()
{
    // 1. Basic variable input
    int x = 0;
    cout << "Enter an integer: ";
    cin >> x;
    cout << "x: " << x << "\n";


    // 2. More than one variable input
    int length = 0;
    int breadth = 0;
    int height = 0;
    int volume = 0;

    cout << "Enter length, breadth and height: ";
    cin >> length >> breadth >> height;

    cout << "Length: " << length << endl;
    cout << "Breadth: " << breadth << endl;
    cout << "Height: " << height << endl;
    volume = length * breadth * height;
    cout << length << " * " << breadth << " * " << height << " = " << volume << endl; 


    // 3. On entering value that doesn't matches the specified variable's datatype, 
    // in that case, cin goes into an error state and doesn't captures the input due to which the program execution is exited
    // We can check this by
    int y;
    cout << "Enter something: ";
    if(cin >> y)
    {
        cout << "cin made the input successfully\n";
    }
    else
    {
        // To clear the error state cin is in, we can make use of the clear() and ignore() function as follows:
        cin.clear();
        cin.ignore(1000, '\n');  // Clears the input stream by removing characters with either length 10000 or till newline character is encountered
        cout << "cin got into error, thus can't make input!\n";
    }

    cout << "Enter something again: ";
    if(cin >> y)
    {
        cout << "cin made the input successfully\n";
    }
    else
    {
        // To clear the error state cin is in, we can make use of the clear() function and ignore() as follows:
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "cin got into error, thus can't make input!\n";
    }


    // Taking input for strings
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    // cin >> str;
    cout << "First entered string: " << str << endl;

    // cin.ignore(1000, '\n');


    cout << "Enter a string again: ";
    getline(cin, str);
    cout << "Second entered string: " << str << endl;

    return 0;
}