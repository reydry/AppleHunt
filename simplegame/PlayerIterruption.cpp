#include "PlayerIterruption.h"
#include "Player.h"
#include "Game.h"
#include <iostream>

void PlayerIterruption::moveUp() noexcept
{
	from.setCoord(_player.getCoord());
	to.setCoord(_player.moveUp());

	if (_game.getCell(to) == nullptr)
	{
		_game.swapCells(from, to);
	}
	else
	{
		_game.clearCell(to);
		_game.swapCells(from, to);
		_player.collectApple();
	}
	_player.setCoord(to);
	
}

void PlayerIterruption::moveDown() noexcept
{
	from.setCoord(_player.getCoord());
	to.setCoord(_player.moveDown());

	if (_game.getCell(to) == nullptr)
	{
		_game.swapCells(from, to);
	}
	else
	{
		_game.clearCell(to);
		_game.swapCells(from, to);
		_player.collectApple();
	}
	_player.setCoord(to);
	
}

void PlayerIterruption::moveRight() noexcept
{
	from.setCoord(_player.getCoord());
	to.setCoord(_player.moveRight());

	if (_game.getCell(to) == nullptr)
	{
		_game.swapCells(from, to);
	}
	else
	{
		_game.clearCell(to);
		_game.swapCells(from, to);
		_player.collectApple();
	}
	_player.setCoord(to);

}

void PlayerIterruption::moveLeft() noexcept
{
	from.setCoord(_player.getCoord());
	to.setCoord(_player.moveLeft());

	if (_game.getCell(to) == nullptr)
	{
		_game.swapCells(from, to);
	}
	else
	{
		_game.clearCell(to);
		_game.swapCells(from, to);
		_player.collectApple();
	}
	_player.setCoord(to);

}
