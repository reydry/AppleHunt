#pragma once
#include "Field.h"

class Player :
    public Field
{
public:

	Player(Coordinate);

	virtual Coordinate getCoord() noexcept;
	virtual void printImage() noexcept;
	void setCoord(Coordinate);
	Coordinate moveUp();
	Coordinate moveDown();
	Coordinate moveLeft();
	Coordinate moveRight();
	void collectApple() noexcept;

	~Player()
	{

	}

private:
	char _image;
	unsigned int _score;
	Coordinate _coord;
};

