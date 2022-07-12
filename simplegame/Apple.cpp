#include "Apple.h"
#include <iostream>

Apple::Apple() : _image(APPLE_IMAGE)
{

}

void Apple::printImage() noexcept
{
	std::cout.flush() << _image;
}

Coordinate Apple::getCoord() noexcept
{
	return Coordinate();
}

Apple::~Apple()
{
	std::cout << "destructor";
	system("pause");
}
