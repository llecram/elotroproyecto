#include "muro.h"
muro::muro(int x,int y):sf::Sprite(){
    mytexture3.loadFromFile("img/blockf.png");
    this->setTexture(mytexture3);
    this->setPosition(x,y);
    this->getPosition();
}
