#include <iostream>
#include <string>
#include <string_view>

struct Cat
{
     std::string_view name {"cat"};
     int numLegs {4};

     double weight()
     {
          return 10.30;
     }
};


struct Dog
{
     std::string_view name {"dog"};
     int numLegs {4};
};


struct Chicken
{
     std::string_view name {"chicken"};
     int numLegs {2};
};


struct Snake
{
     std::string_view name {"snake"};
     int numLegs {0};
};

int main()
{
     Snake animal;
     std::cout << "A " << animal.name << " has " << animal.numLegs << " legs." << '\n';
     
     Cat c;
     std::cout << "Cat Weight: " << c.weight() << '\n';
     

     return 0;
}