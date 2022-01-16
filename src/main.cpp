/*
** Created by Gaëllan Sifflepignon on 15/01/2022.
*/

#include <SFML/Graphics.hpp>
#include <iostream>
#include <cstdlib>
#include "Map/Map.h"

int main(int argc, char **argv, char **envp)
{
    std::list<Tile*> tilemap;
    Map map(5, 2);
    map.display();

    return 0;
}

