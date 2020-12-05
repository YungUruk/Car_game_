#ifndef CAR_H
#define CAR_H
#include <string>
#include <SFML/Graphics.hpp>
class Car {
public:
	void setCarImage(std::string path);
	void setCarPosition();
	void setKeyboard();
	sf::Sprite getCarImage();
private:
	int speed;
	sf::Image car_image;
	sf::Texture car_texture;
	sf::Sprite car_sprite;

};
#endif
