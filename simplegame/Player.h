#pragma once
#include "Field.h"

class Player :
    public Field
{
public:

	Player(Coordinate);

	virtual Coordinate getCoord() noexcept;
	virtual void printImage() noexcept;
	Coordinate moveUp();
	Coordinate moveDown();
	Coordinate moveLeft();
	Coordinate moveRight();
	inline void collectApple() noexcept;

	~Player()
	{

	}
private:
	char _image;
	unsigned int score;
	Coordinate _coord;
};

