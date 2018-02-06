#ifndef MAPA_H
#define MAPA_H
#include "muro.h"
#include<iostream>
#include<fstream>
#include<SFML/Graphics.hpp>
#define mcolumnas 15
#define mfilas 11
using namespace std;
class mapa:public sf::Sprite{
public:
    mapa();
    void pintarmapa();
    sf::Sprite sprite1;
private:
    sf::Texture mytexture1;

};
#endif // MAPA_H
