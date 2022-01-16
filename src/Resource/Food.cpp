//
// Created by Gaëllan Sifflepignon on 16/01/2022.
//

#include "Food.h"

Food::Food(int amount) {
    this->amount = amount;
};

Food::~Food() {

}

std::string Food::getClassName() {
    std::string name("Food");

    return name;
}
