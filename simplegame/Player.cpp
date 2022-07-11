#include "Player.h"
#include "GameIni.h"
#include <iostream>

Player::Player(Coordinate coord) : _image(PLAYER_IMAGE), score(0), _coord(coord)
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

Coordinate Player::moveUp()
{
	return _coord;
}

Coordinate Player::moveDown()
{
	return _coord;
}

Coordinate Player::moveLeft()
{
	return _coord;
}

Coordinate Player::moveRight()
{
	return _coord;
}

inline void Player::collectApple() noexcept
{
	++score;
}
