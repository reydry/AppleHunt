#pragma once

class Player;
class Game; 

class PlayerIterruption
{
public:
	PlayerIterruption(Game* game, Player* player) : _game(*game), _player(*player)
	{

	}

	~PlayerIterruption()
	{

	}

	void moveUp() noexcept;
	void moveDown() noexcept;
	void moveRight() noexcept;
	void moveLeft() noexcept;

private:
	Game& _game;
	Player& _player;
};

