#ifndef BOMBA_H
#define BOMBA_H
#include <SFML/Graphics.hpp>
class bomba{
    public:
    sf::Sprite b;
    sf::Sprite exp1;
    sf::Sprite exp2;
    sf::Sprite exp3;
    sf::Sprite exp4;
    sf::Texture textura_bomba;
    sf::Texture explosion;
    static int contador;
    bomba();
};

#endif // BOMBA_H
