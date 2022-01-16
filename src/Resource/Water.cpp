//
// Created by Gaëllan Sifflepignon on 16/01/2022.
//

#include "Water.h"

Water::Water(int amount) {
    this->amount = amount;
}

Water::~Water() {

}

std::string Water::getClassName() {
    std::string name("Water");

    return name;
}
