#include "bomba.h"
int bomba::contador = 0;
bomba::bomba(){
    //establecemos la textura de la bomba
    textura_bomba.loadFromFile("img/bomba.png");
    explosion.loadFromFile("img/explosion.png");
    this->b.setTexture(textura_bomba);
    this->exp1.setTexture(explosion);
    this->exp2.setTexture(explosion);
    this->exp4.setTexture(explosion);
    this->exp3.setTexture(explosion);

    contador++;
}



