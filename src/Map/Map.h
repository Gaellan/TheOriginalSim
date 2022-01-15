//
// Created by Gaëllan Sifflepignon on 15/01/2022.
//

#ifndef THEORIGINALSIM_MAP_H
#define THEORIGINALSIM_MAP_H

#include <list>
#include <iostream>
#include "Tile.h"

class Map {

    private:

    int size_x;
    int size_y;
    std::list<Tile> map;

    public:

    Map(int size_x, int size_y);
    ~ Map();

    std::list<Tile> getMap();
    void setMap(std::list<Tile> map);
    int getSizeX();
    int getSizeY();

    void display();
};

#endif //THEORIGINALSIM_MAP_H
