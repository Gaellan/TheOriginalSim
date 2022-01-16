//
// Created by Gaëllan Sifflepignon on 16/01/2022.
//

#include "Resource.h"

Resource::Resource() {

}

Resource::~Resource() {

}

int Resource::getAmount() {
    return this->amount;
}

void Resource::setAmount(int amount) {
    this->amount = amount;
}

std::string Resource::getClassName() {
    std::string name("Resource");

    return name;
}
