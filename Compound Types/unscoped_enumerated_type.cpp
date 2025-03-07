// Program to learn the concept of unscoped enumerated type in C++

// Define an unscoped enumerated type named MonsterType to choose between the following monster races: orc, goblin, troll, ogre, and skeleton.

#include <iostream>

enum MonsterType
{
    orc,
    goblin,
    troll,
    ogre,
    skeleton,
};

int main()
{
    MonsterType m {troll};

    if(m == troll)
    {
        std::cout << "Monster instantiated is a troll.\n";
    }
    else
    {
        std::cout << "Unknown monster!\n";
    }

    return 0;
}