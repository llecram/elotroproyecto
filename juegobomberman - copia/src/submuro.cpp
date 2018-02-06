#include "submuro.h"
submuro::~submuro(){
    delete []cuerpo;
}
submuro::submuro(int a,int b){

    // cargamos la textura y la ponemos
    fondo_muro.loadFromFile("img/block1.png");
    cuerpo=new Sprite[9];
    //asignamos textura y escala a todos los sprites
    for (int i=0;i<9;i++){
        cuerpo[i].setTexture(fondo_muro);
        //cuerpo[i].setScale(0.34,0.34);
    }
    my_x=a,my_y=b;
    //asignamos posicion de acuerdo a x,y
    cuerpo[0].setPosition(Vector2f(my_x-20,my_y-20));
    cuerpo[1].setPosition(Vector2f(my_x,my_y-20));
    cuerpo[2].setPosition(Vector2f(my_x+20,my_y-20));
    cuerpo[3].setPosition(Vector2f(my_x-20,my_y));
    cuerpo[4].setPosition(Vector2f(my_x,my_y));
    cuerpo[5].setPosition(Vector2f(my_x+20,my_y));
    cuerpo[6].setPosition(Vector2f(my_x-20,my_y+20));
    cuerpo[7].setPosition(Vector2f(my_x,my_y+20));
    cuerpo[8].setPosition(Vector2f(my_x+20,my_y+20));
}
int submuro::getxposition(){
    return my_x;
}
int submuro::getyposition(){
    return my_y;
}
