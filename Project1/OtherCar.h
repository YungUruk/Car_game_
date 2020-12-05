#ifndef OTHERCAR_H
#define OTHERCAR_H
#include <string>
#include <iostream>
#include <SFML/Graphics.hpp>
class OtherCar {
public:
	void setCarImage(std::string path);
	void carMoveDown();
	void carCreatePosition();
	void carDelete();
private:
	std::string path;
	int car_variant;
	bool sprite_is_visible;
	sf::Image other_car;
	sf::Texture other_car_texture;
	sf::Sprite other_car_sprite;
	sf::Sprite second_car_sprite;
};

#endif