#include <iostream>
#include "Monster.h"

int main()
{
    Monster m = Monster("Goblin", 2,3);

   // m.name = "Goblin";

    //m.health = 10;

    //m.damage = 2;

    std::cout << m.name << " " << m.health << " " << m.damage << "\n";
}