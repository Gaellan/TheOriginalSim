//
// Created by Gaëllan Sifflepignon on 15/01/2022.
//

#ifndef THEORIGINALSIM_TILE_H
#define THEORIGINALSIM_TILE_H

#include <list>
#include "../Resource/Resource.h"
#include "TileState.h"

class Tile {
    private :

        int position_x;
        int position_y;
        std::list<Resource*> resources;
        TileState state;

    public :

        Tile(int pos_x, int pos_y);
        ~Tile();

        int getPosX();
        void setPosX(int pos_x);

        int getPosY();
        void setPosY(int pos_y);

        std::list<Resource*> getResources();
        void setResources(std::list<Resource*> list);

        TileState getState();
        void setState( TileState state);
};

#endif //THEORIGINALSIM_TILE_H
