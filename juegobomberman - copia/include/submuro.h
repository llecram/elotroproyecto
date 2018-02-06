#ifndef SUBMURO_H
#define SUBMURO_H
#include <SFML/Graphics.hpp>

using namespace sf;
class submuro{
public:
    Texture fondo_muro;
    Sprite *cuerpo;
    submuro(int ,int);
    ~submuro();
    int getxposition();
    int getyposition();
private:
    int my_x,my_y;
};

#endif

