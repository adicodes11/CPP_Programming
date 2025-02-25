#include<iostream>
using namespace std;

int getInteger()
{
    cout << "Enter a number: ";
    int num{};
    cin >> num;

    return num;
}

int main()
{
    int smaller{getInteger()};
    int larger{getInteger()};

    if(larger < smaller)
    {
        int temp = larger;
        larger = smaller;
        smaller = temp;
    }

    cout << "smaller: " << smaller << '\n';
    cout << "larger: " << larger << '\n';


    return 0;
}