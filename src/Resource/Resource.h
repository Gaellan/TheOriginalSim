//
// Created by Gaëllan Sifflepignon on 16/01/2022.
//

#ifndef THEORIGINALSIM_RESOURCE_H
#define THEORIGINALSIM_RESOURCE_H

#include <string>


class Resource {

    protected:

    int amount;

    public:

    Resource();
    virtual ~Resource();

    int getAmount();
    void setAmount(int amount);

    virtual std::string getClassName();
};


#endif //THEORIGINALSIM_RESOURCE_H
