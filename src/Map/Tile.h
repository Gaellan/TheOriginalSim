//
// Created by Gaëllan Sifflepignon on 15/01/2022.
//

#ifndef THEORIGINALSIM_TILE_H
#define THEORIGINALSIM_TILE_H

class Tile {
    private :

        int position_x;
        int position_y;

    public :

        Tile(int pos_x, int pos_y);
        ~Tile();

        int getPosX();
        void setPosX(int pos_x);
        int getPosY();
        void setPosY(int pos_y);
};

#endif //THEORIGINALSIM_TILE_H
