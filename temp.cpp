#include<iostream>
using namespace std;

int main()
{

    typedef struct Student
    {
        char c;
        int age;
    }e;

    Student s1, s2;
    e s3, s4;

    cout << "sizeof(s1): " << sizeof(s1) << "\n";
    cout << "sizeof(s3): " << sizeof(s3) << "\n";

    cout << "sizeof(struct Student): " << sizeof(struct Student) << endl;

    return 0;
}