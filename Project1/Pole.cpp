#include "Pole.h"

Pole::Pole()
{
}
void Pole::setWindowSize(int height, int width) {
	this->height = height;
	this->width = width;
}
void Pole::drawSomeShit(sf::Sprite shit) {

};
void Pole::setBackground(std::string path) {
	this->pole.loadFromFile(path);
	this->pole_texture.loadFromImage(pole);
	this->pole_sprite.setTexture(pole_texture);
}
void Pole::setPoleTitle(std::string title) {
	this->title = title;
};

void Pole::setGameCar(Gamecar car) {
	this->car = car;
	this->car.move();
}

void Pole::letsGo() {
	sf::RenderWindow window(sf::VideoMode(this->height, this->width), this->title);
	pole_sprite.setPosition(510, 0);
	while (window.isOpen())
	
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
		
		window.clear();
		window.draw(pole_sprite);
		window.draw(this->car.getSprite());
		window.display();
	}
};