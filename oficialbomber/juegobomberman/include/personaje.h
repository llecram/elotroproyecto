#ifndef PERSONAJE_H
#define PERSONAJE_H
#include<SFML/Graphics.hpp>
#include "windows.h"
class personaje:public sf::Sprite
{
public:
    void mover();
    personaje();
private:
    sf::Texture player1;
protected:
    int frame;
    int x=60;
    int y=60;
};

#endif // PERSONAJE_H
