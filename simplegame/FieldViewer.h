#pragma once

class Game;
class Player;

class FieldViewer
{
public:
	FieldViewer(Game* game);
	~FieldViewer();

	void setPlayer(Player*);
	inline void printImage(char) noexcept;
	void printField() noexcept;
	void printMainMenu() noexcept;
	inline void printStat() noexcept;
	void moveUpMenu() noexcept;
	void moveDownMenu() noexcept;
	unsigned getX();
	void printLeaderboard() noexcept;

private:
	Game& _game;
	Player* _player;
	unsigned int _x;
};

