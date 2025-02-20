#include <iostream>
using namespace std;

double getDouble()
{
    double num{};
    cout << "Enter a double: ";
    cin >> num;
    return num;
}

char getOperator()
{
    char operation{};
    cout << "Enter operator: ";
    cin >> operation;
    return operation;
}

void printResult(double num1, char operation, double num2)
{
    double result{};

    switch (operation)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        result = num1 / num2;
        break;
    default:
        return;
    }

    cout << num1 << " " << operation << " " << num2 << " = " << result << '\n';
}

int main()
{
    double x{getDouble()};
    double y{getDouble()};

    char operation{getOperator()};

    printResult(x, operation, y);

    return 0;
}