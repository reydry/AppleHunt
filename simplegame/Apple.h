#pragma once
#include "Field.h"

class Apple :
    public Field
{
public:

	Apple();

	virtual char getImage() noexcept;
	virtual Coordinate getCoord() noexcept;
	
	virtual ~Apple();

};

