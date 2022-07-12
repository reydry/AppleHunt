#pragma once

class Game;
class Player;

class FieldViewer
{
public:
	FieldViewer(Game* game, Player* player);
	~FieldViewer();

	void printField() noexcept;

private:
	Game& _game;
	Player& _player;
};

