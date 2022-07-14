#pragma once
#include "Field.h"

class Player :
    public Field
{
public:

	Player(Coordinate);

	virtual Coordinate getCoord() noexcept;
	virtual char getImage() noexcept;
	void setCoord(Coordinate);
	Coordinate moveUp();
	Coordinate moveDown();
	Coordinate moveLeft();
	Coordinate moveRight();
	void collectApple() noexcept;
	unsigned int getScore() noexcept;

	~Player()
	{

	}

private:
	
	unsigned int _score;
};

