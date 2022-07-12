#include "Player.h"
#include "GameIni.h"
#include <iostream>

Player::Player(Coordinate coord) : _image(PLAYER_IMAGE), _score(0), _coord(coord)
{

}

Coordinate Player::getCoord() noexcept
{
	return _coord;
}

void Player::printImage() noexcept
{
	std::cout.flush() << _image;
}

void Player::setCoord(Coordinate to)
{
	_coord.setCoord(to);
}

Coordinate Player::moveUp()
{
	if ((_coord.getY() - 1) < 0 || (_coord.getY() - 1) > 24)
	{
		return Coordinate(_coord.getX(), MAX_ROWS - 1);
	}
	return Coordinate(_coord.getX(), _coord.getY() - 1);
}

Coordinate Player::moveDown()
{
	if ((_coord.getY() + 1) > 24)
	{
		return Coordinate(_coord.getX(), 0);
	}
	return Coordinate(_coord.getX(), _coord.getY() + 1);
}

Coordinate Player::moveLeft()
{
	if ((_coord.getX() - 1) < 0 || (_coord.getX() - 1) > 24)
	{
		return Coordinate(MAX_COLS - 1, _coord.getY());
	}
	return Coordinate(_coord.getX() - 1, _coord.getY());
}

Coordinate Player::moveRight()
{
	if ((_coord.getX() + 1) > 24)
	{
		return Coordinate(0, _coord.getY());
	}
	return Coordinate(_coord.getX() + 1, _coord.getY());
}

void Player::collectApple() noexcept
{
	++_score;
}
