#include "Car.h"
void Car::setCarImage(std::string path) {
	this->car_image.loadFromFile(path);
	this->car_texture.loadFromImage(car_image);
	this->car_sprite.setTexture(car_texture);
};
sf::Sprite Car::getCarImage() {
	return this->car_sprite;
}
void Car::setKeyboard() {
	if ((sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) || (sf::Keyboard::isKeyPressed(sf::Keyboard::A))) { car_sprite.move(-1, 0); }
	if ((sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) || (sf::Keyboard::isKeyPressed(sf::Keyboard::D))) { car_sprite.move(1, 0); }
};
void Car::setCarPosition() {
	this->car_sprite.setPosition(860, 760);
};

