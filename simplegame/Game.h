#pragma once
#include "Field.h"
#include "PlayerIterruption.h"
#include "GameIni.h"

class Game
{
public:
	Game();
	
	void runGame() noexcept;
	
	virtual ~Game();

private:

	inline void processGame() noexcept;
	inline void initPlayer() noexcept;
	inline void initApples() noexcept;
	inline void printField() noexcept;
	inline void initField() noexcept;
	inline void initGame() noexcept;
	
	Field* _field[MAX_ROWS][MAX_COLS];
	PlayerIterruption* _player;
	//Coordinate _playerCoordinate;
	//Player* _player;
};

