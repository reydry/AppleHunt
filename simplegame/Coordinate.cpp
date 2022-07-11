#include "Coordinate.h"

Coordinate::Coordinate()
{
}

Coordinate::Coordinate(unsigned x, unsigned y) : _x(x), _y(y)
{

}

unsigned Coordinate::getX() noexcept
{
	return _x;
}

unsigned Coordinate::getY() noexcept
{
	return _y;
}


void Coordinate::setCoord(unsigned x, unsigned y) noexcept
{
	_x = x;
	_y = y;
}

Coordinate Coordinate::getCoord() noexcept
{
	return *this;
}

Coordinate::~Coordinate()
{
}
