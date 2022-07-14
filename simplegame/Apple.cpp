#include "Apple.h"
#include <iostream>

Apple::Apple()
{
	_image = APPLE_IMAGE;
}

char Apple::getImage() noexcept
{
	return _image;
}

Coordinate Apple::getCoord() noexcept
{
	return Coordinate();
}

Apple::~Apple()
{
	
}
