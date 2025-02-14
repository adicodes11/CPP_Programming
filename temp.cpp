#include <iostream>
void printBinary(int num)
{
    if (num > 1)
        printBinary(num / 2);
    std::cout << (num % 2);
}

int main()
{
    int num = 10; // Example number
    std::cout << "Binary: ";
    printBinary(num);
    std::cout << std::endl;
    return 0;
}
