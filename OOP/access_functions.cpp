// Program to learn about access functions in C++

#include <iostream>

class Date
{
private:
    int m_year{};
    int m_month{};
    int m_day{};

public:
    void setDate(int day, int month, int year)
    {
        m_day = day;
        m_month = month;
        m_year = year;
    }

    void getDate()
    {
        std::cout << m_day << "/" << m_month << "/" << m_year << '\n';
    }
};

int main()
{
    Date today;

    // Setter usage
    today.setDate(14, 03, 2025);

    // Getter usage
    today.getDate();
}