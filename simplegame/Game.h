#pragma once
#include "Field.h"
#include "PlayerIterruption.h"
#include "FieldViewer.h"
#include "GameIni.h"

class Game
{
public:
	Game();
	
	void runGame() noexcept;

	void swapCells(Coordinate, Coordinate) noexcept;
	Field* getCell(Coordinate) noexcept;
	Field* getCell(unsigned, unsigned) noexcept;
	void clearCell(Coordinate coord) noexcept;
	void processMainMenu() noexcept;

	virtual ~Game();

private:

	inline void clearField() noexcept;
	inline void initViewer() noexcept;
	inline void processGame() noexcept;
	inline void initPlayer() noexcept;
	inline void initApples() noexcept;
	inline void initField() noexcept;
	inline void initGame() noexcept;
	
	int idy, idx;
	Field* _field[MAX_ROWS][MAX_COLS];
	PlayerIterruption* _player_controller;
	FieldViewer* _console_viewer;

};

