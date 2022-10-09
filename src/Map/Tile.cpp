//
// Created by Gaëllan Sifflepignon on 15/01/2022.
//

#include "Tile.h"

Tile::Tile(int pos_x, int pos_y) {
    this->setPosX(pos_x);
    this->setPosY(pos_y);
    this->state = EMPTY;
}

Tile::~Tile() {

}

int Tile::getPosX() {
    return this->position_x;
}

void Tile::setPosX(int pos_x) {
    this->position_x = pos_x;
}

int Tile::getPosY() {
    return this->position_y;
}

void Tile::setPosY(int pos_y) {
    this->position_y = pos_y;
}

std::list<Resource*> Tile::getResources() {
    return this->resources;
}

void Tile::setResources(std::list <Resource*> list) {
    this->resources = list;
}

TileState Tile::getState() {
    return this->state;
}

void Tile::setState(TileState state) {
    this->state = state;
}
