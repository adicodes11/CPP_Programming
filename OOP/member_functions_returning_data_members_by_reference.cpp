// Program to learn the concept of member functions returning data members by reference

#include <iostream>

class Date
{   
private: 
    int m_year{};
    int m_month{};
    int m_day{};
    
public:
    int& getYear()
    {
        return m_year = 4;
    }
};

int main()
{
    Date today;
    std::cout << today.getYear() << '\n';
    today.getYear() = 5;
    std::cout << today.getYear() << '\n';

    return 0;
}