//
// Created by Gaëllan Sifflepignon on 16/01/2022.
//

#ifndef THEORIGINALSIM_FOOD_H
#define THEORIGINALSIM_FOOD_H

#include "Resource.h"

class Food : public Resource {

    private:

    public:

    Food(int amount);
    ~Food();

    std::string getClassName();
};


#endif //THEORIGINALSIM_FOOD_H
