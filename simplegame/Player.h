#pragma once
#include "Field.h"

class Player :
    public Field
{
public:
	Player() : _image(PLAYER_IMAGE)
	{

	}

	virtual void printImage() noexcept;
	void moveUp();
	void moveDown();
	void moveLeft();
	void moveRight();

	~Player()
	{

	}
private:
	char _image;
};

