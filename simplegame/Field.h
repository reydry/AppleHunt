#pragma once
#include "GameIni.h"
#include "Coordinate.h"
#include <iostream>

class Field
{
public:
	Field()
	{

	}

	virtual char getImage() noexcept = 0;
	virtual Coordinate getCoord() = 0;

	virtual ~Field()
	{

	}

protected:
	char _image;
	Coordinate _coord;
};

