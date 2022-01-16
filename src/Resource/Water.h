//
// Created by Gaëllan Sifflepignon on 16/01/2022.
//

#ifndef THEORIGINALSIM_WATER_H
#define THEORIGINALSIM_WATER_H

#include "Resource.h"

class Water : public Resource {

    private:

    public:
    Water(int amount);
    ~Water();

    std::string getClassName();
};


#endif //THEORIGINALSIM_WATER_H
