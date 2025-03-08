/*

* Const structs
Variables of a struct type can be const (or constexpr), and just like all const variables, they must be initialized.

*/

#include <iostream>

struct Rectangle
{
    double length{};
    double width{};
};

int main()
{
    const Rectangle unit {1.0, 1.0};
    const Rectangle zero {};    // Value-intialized all members

    return 0;
}