#include "juego.h"
juego::juego(){
    mywindow.create(sf::VideoMode(900, 660, 32),"bomberman",sf::Style::Close);
    mywindow.setVerticalSyncEnabled(true);

}
void juego::run(){
    while (mywindow.isOpen())
	{
		sf::Event event;
		while (mywindow.pollEvent(event)){
			if (event.type == sf::Event::Closed)
				mywindow.close();
		}

        myplayer.mover();
        mywindow.draw(mimapa);
        mywindow.draw(mimuro);
        mywindow.draw(mimuro1);
        mywindow.draw(mimuro2);
        mywindow.draw(mimuro3);
        mywindow.draw(mimuro4);
        mywindow.draw(mimuro5);
        mywindow.draw(mimuro6);
        mywindow.draw(mimuro7);
        mywindow.draw(mimuro8);
        mywindow.draw(mimuro9);
        mywindow.draw(mimuro10);
        mywindow.draw(mimuro11);
        mywindow.draw(mimuro12);
        mywindow.draw(mimuro13);
        mywindow.draw(mimuro14);
        mywindow.draw(mimuro15);
        mywindow.draw(mimuro16);
        mywindow.draw(mimuro17);
        mywindow.draw(mimuro18);
        mywindow.draw(mimuro19);
        mywindow.draw(mimuro20);
        mywindow.draw(mimuro21);
        mywindow.draw(mimuro22);
        mywindow.draw(mimuro23);
        mywindow.draw(mimuro24);
        mywindow.draw(mimuro25);
        mywindow.draw(mimuro26);
        mywindow.draw(mimuro27);
        mywindow.draw(mimuro28);
        mywindow.draw(mimuro29);
        mywindow.draw(mimuro30);
        mywindow.draw(mimuro31);
        mywindow.draw(mimuro32);
        mywindow.draw(mimuro33);
        mywindow.draw(mimuro34);
        mywindow.draw(mimuro35);
        mywindow.draw(mimuro36);
        mywindow.draw(mimuro37);
        mywindow.draw(mimuro38);
        mywindow.draw(mimuro39);
        mywindow.draw(mimuro40);
        mywindow.draw(mimuro41);
        mywindow.draw(mimuro42);
        mywindow.draw(mimuro43);
        mywindow.draw(mimuro44);
        mywindow.draw(mimuro45);
        mywindow.draw(mimuro46);
        mywindow.draw(mimuro47);
        mywindow.draw(mimuro48);
        mywindow.draw(mimuro49);
        mywindow.draw(mimuro50);
        mywindow.draw(mimuro51);
        mywindow.draw(mimuro52);
        mywindow.draw(mimuro53);
        mywindow.draw(mimuro54);
        mywindow.draw(mimuro55);
        mywindow.draw(mimuro56);
        mywindow.draw(mimuro57);
        mywindow.draw(mimuro58);
        mywindow.draw(mimuro59);
        mywindow.draw(mimuro60);
        mywindow.draw(mimuro61);
        mywindow.draw(mimuro62);
        mywindow.draw(mimuro63);
        mywindow.draw(mimuro64);
        mywindow.draw(mimuro65);
        mywindow.draw(mimuro66);
        mywindow.draw(mimuro67);
        mywindow.draw(mimuro68);
        mywindow.draw(mimuro69);
        mywindow.draw(mimuro70);
        mywindow.draw(mimuro71);
        mywindow.draw(myplayer);
        for(int i =0;i<9;i++){
			mywindow.draw(misubmuro.cuerpo[i]);
		}
		for(int i =0;i<9;i++){
			mywindow.draw(misubmuro1.cuerpo[i]);
		}
		for(int i =0;i<9;i++){
			mywindow.draw(misubmuro2.cuerpo[i]);
		}
		for(int i =0;i<9;i++){
			mywindow.draw(misubmuro3.cuerpo[i]);
		}
		for(int i =0;i<9;i++){
			mywindow.draw(misubmuro4.cuerpo[i]);
		}
		for(int i =0;i<9;i++){
			mywindow.draw(misubmuro5.cuerpo[i]);
		}
		for(int i =0;i<9;i++){
			mywindow.draw(misubmuro6.cuerpo[i]);
		}
		for(int i =0;i<9;i++){
			mywindow.draw(misubmuro7.cuerpo[i]);
		}
		for(int i =0;i<9;i++){
			mywindow.draw(misubmuro8.cuerpo[i]);
		}
		for(int i =0;i<9;i++){
			mywindow.draw(misubmuro9.cuerpo[i]);
		}
		for(int i =0;i<9;i++){
			mywindow.draw(misubmuro10.cuerpo[i]);
		}
		for(int i =0;i<9;i++){
			mywindow.draw(misubmuro11.cuerpo[i]);
		}
		for(int i =0;i<9;i++){
			mywindow.draw(misubmuro12.cuerpo[i]);
		}
		for(int i =0;i<9;i++){
			mywindow.draw(misubmuro13.cuerpo[i]);
		}
		for(int i =0;i<9;i++){
			mywindow.draw(misubmuro14.cuerpo[i]);
		}
		for(int i =0;i<9;i++){
			mywindow.draw(misubmuro15.cuerpo[i]);
		}
		for(int i =0;i<9;i++){
			mywindow.draw(misubmuro16.cuerpo[i]);
		}
		for(int i =0;i<9;i++){
			mywindow.draw(misubmuro17.cuerpo[i]);
		}
		for(int i =0;i<9;i++){
			mywindow.draw(misubmuro18.cuerpo[i]);
		}
		for(int i =0;i<9;i++){
			mywindow.draw(misubmuro19.cuerpo[i]);
		}
		for(int i =0;i<9;i++){
			mywindow.draw(misubmuro20.cuerpo[i]);
		}
		for(int i =0;i<9;i++){
			mywindow.draw(misubmuro21.cuerpo[i]);
		}
		for(int i =0;i<9;i++){
			mywindow.draw(misubmuro22.cuerpo[i]);
		}
		for(int i =0;i<9;i++){
			mywindow.draw(misubmuro23.cuerpo[i]);
		}
		for(int i =0;i<9;i++){
			mywindow.draw(misubmuro24.cuerpo[i]);
		}
		for(int i =0;i<9;i++){
			mywindow.draw(misubmuro25.cuerpo[i]);
		}
		for(int i =0;i<9;i++){
			mywindow.draw(misubmuro26.cuerpo[i]);
		}
		for(int i =0;i<9;i++){
			mywindow.draw(misubmuro27.cuerpo[i]);
		}
		for(int i =0;i<9;i++){
			mywindow.draw(misubmuro28.cuerpo[i]);
		}
		for(int i =0;i<9;i++){
			mywindow.draw(misubmuro29.cuerpo[i]);
		}
		for(int i =0;i<9;i++){
			mywindow.draw(misubmuro30.cuerpo[i]);
		}
		for(int i =0;i<9;i++){
			mywindow.draw(misubmuro31.cuerpo[i]);
		}
		for(int i =0;i<9;i++){
			mywindow.draw(misubmuro32.cuerpo[i]);
		}
		for(int i =0;i<9;i++){
			mywindow.draw(misubmuro33.cuerpo[i]);
		}
		for(int i =0;i<9;i++){
			mywindow.draw(misubmuro34.cuerpo[i]);
		}
		for(int i =0;i<9;i++){
			mywindow.draw(misubmuro35.cuerpo[i]);
		}
		for(int i =0;i<9;i++){
			mywindow.draw(misubmuro36.cuerpo[i]);
		}
		for(int i =0;i<9;i++){
			mywindow.draw(misubmuro37.cuerpo[i]);
		}
		for(int i =0;i<9;i++){
			mywindow.draw(misubmuro38.cuerpo[i]);
		}
		for(int i =0;i<9;i++){
			mywindow.draw(misubmuro39.cuerpo[i]);
		}
		for(int i =0;i<9;i++){
			mywindow.draw(misubmuro40.cuerpo[i]);
		}
		for(int i =0;i<9;i++){
			mywindow.draw(misubmuro41.cuerpo[i]);
		}
		for(int i =0;i<9;i++){
			mywindow.draw(misubmuro42.cuerpo[i]);
		}
		for(int i =0;i<9;i++){
			mywindow.draw(misubmuro43.cuerpo[i]);
		}
		for(int i =0;i<9;i++){
			mywindow.draw(misubmuro44.cuerpo[i]);
		}
		for(int i =0;i<9;i++){
			mywindow.draw(misubmuro45.cuerpo[i]);
		}
		for(int i =0;i<9;i++){
			mywindow.draw(misubmuro46.cuerpo[i]);
		}
		for(int i =0;i<9;i++){
			mywindow.draw(misubmuro47.cuerpo[i]);
		}
		for(int i =0;i<9;i++){
			mywindow.draw(misubmuro48.cuerpo[i]);
		}
		for(int i =0;i<9;i++){
			mywindow.draw(misubmuro49.cuerpo[i]);
		}
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space)&&contador){
                tvida= reloj1.getElapsedTime();
                bomba.b.setPosition(myplayer.getx(),myplayer.gety());
                bomba.exp1.setPosition(myplayer.getx()+60,myplayer.gety());
                bomba.exp2.setPosition(myplayer.getx()-60,myplayer.gety());
                bomba.exp3.setPosition(myplayer.getx(),myplayer.gety()+60);
                bomba.exp4.setPosition(myplayer.getx(),myplayer.gety()-60);
                reloj2.restart();
                contador=false;

        }
        if ((reloj1.getElapsedTime()-tvida).asSeconds()<=3 && reloj1.getElapsedTime().asSeconds()>3){
                if (reloj2.getElapsedTime().asSeconds() <2)
                        mywindow.draw(bomba.b);
                else{
                        int x=bomba.b.getPosition().x;
                        int y=bomba.b.getPosition().y;


                        if((y==60 || y==180 || y==300|| y==420 || y==540)){
                                if (x>60)
                                        mywindow.draw(bomba.exp2);
                                if (x<780)
                                        mywindow.draw(bomba.exp1);
                        }
                        if((x==60||x==180 ||x==300|| x==420 || x==540 || x==660 || x==780)){

                                if(y>60)
                                        mywindow.draw(bomba.exp4);
                                if(y<540)
                                        mywindow.draw(bomba.exp3);
                        }
                        contador=true;

                }

        }
        mywindow.display();
	}
}
