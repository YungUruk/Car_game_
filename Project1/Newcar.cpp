#include "Newcar.h"



Newcar::Newcar():
	pos_x(0),
	pos_y(0)
{}

Newcar::Newcar(int x, int y):
	pos_x(x),
	pos_y(y)
{}

void Newcar::setCarImage(std::string path) {
	this->car_image.loadFromFile(path);
	this->car_texture.loadFromImage(car_image);
	this->car_sprite.setTexture(car_texture);
	// this->car_sprite.setPosition(this->pos_x, this->pos_y);
}
void Newcar::move() {
	// this->car_sprite.move(this->pos_x, this->pos_y);
	this->car_sprite.setPosition(this->pos_x, this->pos_y);
}
sf::Sprite Newcar::getSprite() {
	return this->car_sprite;
}


Newcar::~Newcar()
{
}


Gamecar::Gamecar()
{
}

Gamecar::Gamecar(int x, int y) {
	Newcar(x, y);
}

void Gamecar::setPosX(int x) {
	this->pos_x = x;
}
Othercar::Othercar(int x, int y, int speed) :
	speed(speed)
{
	Newcar::Newcar(x, y);
}
void Othercar::setPosY(int y) {
	this->pos_y = y;
}
void Othercar::changeSpeed() {
	this->speed *= SPEED_KOEF;
}
