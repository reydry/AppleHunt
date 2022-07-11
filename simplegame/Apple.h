#pragma once
#include "Field.h"

class Apple :
    public Field
{
public:

	Apple();

	virtual void printImage() noexcept;
	virtual Coordinate getCoord() noexcept;
	
	virtual ~Apple();

private:
	char _image;
	Coordinate _coord;
};

