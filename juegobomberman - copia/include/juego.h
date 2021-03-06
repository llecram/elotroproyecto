#ifndef JUEGO_H
#define JUEGO_H
#include<SFML/Graphics.hpp>
#include "mapa.h"
#include "muro.h"
#include "submuro.h"
#include "personaje.h"
#include"bomba.h"
class juego{
public:
    juego();
    void run();
    sf::Clock reloj1;
    sf::Clock reloj2;
    sf::Time tvida;
    bomba bomba;

private:
    bool contador=true;
    sf::RenderWindow mywindow;
    mapa mimapa;
    muro mimuro{0,0};
    muro mimuro1{60,0};
    muro mimuro2{120,0};
    muro mimuro3{180,0};
    muro mimuro4{240,0};
    muro mimuro5{300,0};
    muro mimuro6{360,0};
    muro mimuro7{420,0};
    muro mimuro8{480,0};
    muro mimuro9{540,0};
    muro mimuro10{600,0};
    muro mimuro11{660,0};
    muro mimuro12{720,0};
    muro mimuro13{780,0};
    muro mimuro14{840,0};
    muro mimuro15{0,60};
    muro mimuro16{0,120};
    muro mimuro17{0,180};
    muro mimuro18{0,240};
    muro mimuro19{0,300};
    muro mimuro20{0,360};
    muro mimuro21{0,420};
    muro mimuro22{0,480};
    muro mimuro23{0,540};
    muro mimuro24{0,600};
    muro mimuro25{120,600};
    muro mimuro26{180,600};
    muro mimuro27{240,600};
    muro mimuro28{300,600};
    muro mimuro29{360,600};
    muro mimuro30{420,600};
    muro mimuro31{480,600};
    muro mimuro32{540,600};
    muro mimuro33{600,600};
    muro mimuro34{660,600};
    muro mimuro35{720,600};
    muro mimuro36{780,600};
    muro mimuro37{840,600};
    muro mimuro38{840,540};
    muro mimuro39{840,480};
    muro mimuro40{840,420};
    muro mimuro41{840,360};
    muro mimuro42{840,300};
    muro mimuro43{840,240};
    muro mimuro44{840,180};
    muro mimuro45{840,120};
    muro mimuro46{840,60};
    muro mimuro47{120,120};
    muro mimuro48{240,120};
    muro mimuro49{360,120};
    muro mimuro50{480,120};
    muro mimuro51{600,120};
    muro mimuro52{720,120};
    muro mimuro53{120,240};
    muro mimuro54{240,240};
    muro mimuro55{360,240};
    muro mimuro56{480,240};
    muro mimuro57{600,240};
    muro mimuro58{720,240};
    muro mimuro59{120,360};
    muro mimuro60{240,360};
    muro mimuro61{360,360};
    muro mimuro62{480,360};
    muro mimuro63{600,360};
    muro mimuro64{720,360};
    muro mimuro65{120,480};
    muro mimuro66{240,480};
    muro mimuro67{360,480};
    muro mimuro68{480,480};
    muro mimuro69{600,480};
    muro mimuro70{720,480};
    muro mimuro71{60,600};
    submuro misubmuro{200,80};
    submuro misubmuro1{380,80};
    submuro misubmuro2{440,80};
    submuro misubmuro3{500,80};
    submuro misubmuro4{560,80};
    submuro misubmuro5{680,80};
    submuro misubmuro6{740,80};
    submuro misubmuro7{200,140};
    submuro misubmuro8{320,140};
    submuro misubmuro9{440,140};
    submuro misubmuro10{560,140};
    submuro misubmuro11{680,140};
    submuro misubmuro12{80,200};
    submuro misubmuro13{140,200};
    submuro misubmuro14{200,200};
    submuro misubmuro15{260,200};
    submuro misubmuro16{380,200};
    submuro misubmuro17{680,200};
    submuro misubmuro18{800,200};
    submuro misubmuro19{80,260};
    submuro misubmuro20{200,260};
    submuro misubmuro21{320,260};
    submuro misubmuro22{440,260};
    submuro misubmuro23{320,320};
    submuro misubmuro24{500,320};
    submuro misubmuro25{560,320};
    submuro misubmuro26{680,320};
    submuro misubmuro27{740,320};
    submuro misubmuro28{320,380};
    submuro misubmuro29{560,380};
    submuro misubmuro30{80,440};
    submuro misubmuro31{200,440};
    submuro misubmuro32{260,440};
    submuro misubmuro33{320,440};
    submuro misubmuro34{380,440};
    submuro misubmuro35{440,440};
    submuro misubmuro36{560,440};
    submuro misubmuro37{740,440};
    submuro misubmuro38{800,440};
    submuro misubmuro39{200,500};
    submuro misubmuro40{560,500};
    submuro misubmuro41{680,500};
    submuro misubmuro42{80,560};
    submuro misubmuro43{140,560};
    submuro misubmuro44{200,560};
    submuro misubmuro45{260,560};
    submuro misubmuro46{320,560};
    submuro misubmuro47{500,560};
    submuro misubmuro48{680,560};
    submuro misubmuro49{620,560};
    personaje myplayer;
};
#endif // JUEGO_H

