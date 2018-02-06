#include "mapa.h"
#include<iostream>
using namespace std;
mapa::mapa():Sprite(){
    mytexture1.loadFromFile("img/piso.jpg");
    this->setTexture(mytexture1);
    this->setPosition(0,0);
}
