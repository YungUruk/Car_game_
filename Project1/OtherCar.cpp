#include "OtherCar.h"
#include <ctime>


void OtherCar::setCarImage(std::string path) {
	this->other_car.loadFromFile(path);
	this->other_car_texture.loadFromImage(other_car);
	this->other_car_sprite.setTexture(other_car_texture);
};
void OtherCar::carMoveDown() {
other_car_sprite.move(0,1);

};
void OtherCar::carCreatePosition() {
	second_car_sprite = other_car_sprite;
	srand(time(NULL));
	this->car_variant = rand() %6 + 1; //  ( | ) (|  )  (  |)  (|| )  ( ||)   (| |)
	switch (car_variant) {
	case 1:
		other_car_sprite.setPosition(860, 0);
		break;
	case 2:
		other_car_sprite.setPosition(550, 0);
		break;
	case 3:
		other_car_sprite.setPosition(1170, 0);
		break;
	case 4:
		other_car_sprite.setPosition(550, 0);
		second_car_sprite.setPosition(860, 0);
		break;
	case 5:
		other_car_sprite.setPosition(1170, 0);
		second_car_sprite.setPosition(860, 0);
		break;
	case 6:
		other_car_sprite.setPosition(550, 0);
		second_car_sprite.setPosition(1170, 0);
		break;
	default:
		std::cout << "shoto ne to" << std::endl;
		break;
	};
	
};