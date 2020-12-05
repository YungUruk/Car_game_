#include "Pole.h"
#include "Newcar.h"


int main() {
	Gamecar *car;
	Pole *gameboard;
	gameboard = new Pole();
	car =new Gamecar(860, 760);
	car->setCarImage("images/my_mashine.png");
	gameboard->setWindowSize(1920, 1080);
	gameboard->setPoleTitle("Gona4kI");
	gameboard->setBackground("images/pole.png");
	gameboard->setGameCar(*car);
	gameboard->letsGo();
	return 0;
}