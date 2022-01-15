//
// Created by Gaëllan Sifflepignon on 15/01/2022.
//

#include "Map.h"

Map::Map(int size_x, int size_y) {
    this->size_x = size_x;
    this->size_y = size_y;

    for(int y = 0; y < this->size_y; y++)
    {
        for(int x = 0; x < this->size_x; x++)
        {
            Tile tile(x, y);
            this->map.push_back(tile);
        }
    }
}

Map::~Map() {

}

std::list<Tile> Map::getMap() {
    return this->map;
}

void Map::setMap(std::list<Tile> map) {
    this->map = map;
}

void Map::display() {
    std::list<Tile>::iterator it;

    for(it = this->map.begin(); it != this->map.end(); ++it) {

        if((*it).getPosX() < (this->size_x - 1)) {
            std::cout << "X";
        }
        else {
            std::cout << "X" << std::endl;
        }
    }
}
