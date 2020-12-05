#ifndef POLE_H
#define POLE_H
#include <string>
#include <SFML/Graphics.hpp>
#include "Newcar.h" 
class Pole {
public:
	Pole();
	void setWindowSize(int height,int width);
	void setBackground(std::string pole);
	void setPoleTitle(std::string title);
	void setGameCar(Gamecar car);
	void drawSomeShit(sf::Sprite shit);
	void letsGo();
	~Pole() {};
private:
	    int height;
		int width;
		Gamecar car;
		std::string title;
		sf::Image pole;
		sf::Texture pole_texture;
		sf::Sprite pole_sprite;
		sf::Sprite gamecar_sprite;

};
#endif