//
// Created by Gaëllan Sifflepignon on 15/01/2022.
//

#include <time.h>
#include <cstdlib>
#include <typeinfo>
#include "Map.h"
#include "../Resource/Food.h"
#include "../Resource/Water.h"

Map::Map(int size_x, int size_y) {
    this->size_x = size_x;
    this->size_y = size_y;

    srand(time(NULL));
    for(int y = 0; y < this->size_y; y++)
    {
        for(int x = 0; x < this->size_x; x++)
        {
            Tile * tile = new Tile(x, y);

            std::list<Resource*> list;
            list.push_back(new Water(rand() % (5 - 1) + 1));
            list.push_back(new Food(rand() % (5 - 1) + 1));

            tile->setResources(list);

            this->map.push_back(tile);
        }
    }
}

Map::~Map() {

}

std::list<Tile*> Map::getMap() {
    return this->map;
}

void Map::setMap(std::list<Tile*> map) {
    this->map = map;
}

void Map::display() {
    std::list<Tile*>::iterator it;
    std::list<Resource*>::iterator res_it;
    std::string str_water("Water");
    std::string str_food("Food");

    for(it = this->map.begin(); it != this->map.end(); ++it) {
        std::list<Resource*> res = (*it)->getResources();

        if((*it)->getPosX() < (this->size_x - 1)) {
            int water = 0;
            int food = 0;

            for(res_it = res.begin(); res_it != res.end(); ++res_it)
            {
                if((*res_it)->getClassName().compare(str_water) == 0)
                {
                    water = (*res_it)->getAmount();
                }
                else if((*res_it)->getClassName().compare(str_food) == 0)
                {
                    food = (*res_it)->getAmount();
                }
            }

            if(food > 0 || water > 0)
            {
                std::cout << "F : " << food << " W : " << water << "|";
            }
            else
            {
                std::cout << "X";
            }
        }
        else {
            int water = 0;
            int food = 0;

            for(res_it = res.begin(); res_it != res.end(); ++res_it)
            {
                if((*res_it)->getClassName().compare(str_water) == 0)
                {
                    water = (*res_it)->getAmount();
                }
                else if((*res_it)->getClassName().compare(str_food) == 0)
                {
                    food = (*res_it)->getAmount();
                }
            }

            if(food > 0 || water > 0)
            {
                std::cout << "F : " << food << " W : " << water << "|" << std::endl;
            }
            else
            {
                std::cout << "X" << std::endl;
            }
        }
    }
}
