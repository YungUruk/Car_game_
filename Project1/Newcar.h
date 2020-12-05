#ifndef NEWCAR_H
#define NEWCAR_H
#include <string>
#include <SFML/Graphics.hpp>
#define SPEED_KOEF 1.3
class Newcar
{
public:
	Newcar();
	Newcar(int x, int y);
	void setCarImage(std::string path);
	sf::Sprite getSprite();
	~Newcar();
	void move();
protected:
	int pos_x, pos_y;
	sf::Sprite car_sprite;
	sf::Image car_image;
	sf::Texture car_texture;
};

class Gamecar : public Newcar {
public:
	Gamecar();
	Gamecar(int x, int y);
	void setPosX(int x);
	~Gamecar() {};
};

class Othercar : public Newcar {
public:
	Othercar() {};
	Othercar(int x, int y, int speed);
	void setPosY(int y);
	void changeSpeed();
private:
	int speed;
};
#endif

