#include "Player.h"
#include "GameIni.h"
#include <iostream>

void Player::printImage() noexcept
{
	std::cout.flush() << _image;
}
