#pragma once
#include "Field.h"
#include "GameIni.h"

class Game
{
public:
	Game();
	
	inline void printField() noexcept;
	inline void initField() noexcept;
	void initGame() noexcept;
	
	inline void initPlayer() noexcept;
	inline void initApples() noexcept;
	virtual ~Game();

private:
	Field* _field[MAX_ROWS][MAX_COLS];
};

