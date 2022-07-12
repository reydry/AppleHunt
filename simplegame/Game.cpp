#include "Game.h"
#include "Player.h"
#include "Apple.h"
#include <ctime>
#include <iostream>
#include <conio.h>

using namespace std;

Game::Game()
{
   
}

inline void Game::printField() noexcept
{
    system("cls");
    cout.flush() << "---------------------------" << endl;
    for (int i = 0; i < MAX_COLS; ++i)
    {
        cout.flush() << "|";
        for (int j = 0; j < MAX_ROWS; ++j)
        {
            if (_field[i][j] != nullptr)
            {
                _field[i][j]->printImage();
            }
            else
            {
                cout.flush() << ' ';
            }
        }
        cout.flush() << "|" << endl;
    }
    cout.flush() << "---------------------------" << endl;
}

inline void Game::initField() noexcept
{
    for (int i = 0; i < MAX_ROWS; ++i)
    {
        for (int j = 0; j < MAX_COLS; ++j)
        {
            _field[i][j] = nullptr;
        }
    }
}

inline void Game::initGame() noexcept
{
    initField();
    initPlayer();
    initApples();
    printField();
}

void Game::runGame() noexcept
{
    srand(time(NULL));
    initGame();
    processGame();
}

void Game::swapCells(Coordinate coord_left, Coordinate coord_right) noexcept
{
    swap(_field[coord_left.getY()][coord_left.getX()],
        _field[coord_right.getY()][coord_right.getX()]);
}

Field* Game::getCell(Coordinate coord) noexcept
{
    if (_field[coord.getY()][coord.getX()] == nullptr)
    {
        return nullptr;
    }
    else
    {
        return _field[coord.getY()][coord.getX()];
    }
}

void Game::clearCell(Coordinate coord) noexcept
{
    _field[coord.getY()][coord.getX()]->~Field();
    _field[coord.getY()][coord.getX()] = nullptr;
}

inline void Game::processGame() noexcept
{
    char ch = '0';

    while (1)
    {
        if (_kbhit())
            ch = _getch();
        if (int(ch) == 27)
        {
            break;
        }
        if (int(ch) == 77)
        {
            _player_controller->moveRight();
            printField();
            //cout.flush() << "move right!" << endl;
        }
        if (int(ch) == 75)
        {
            _player_controller->moveLeft();
            printField();
            //cout.flush() << "move left" << endl;
        }
        if (int(ch) == 72)
        {
            _player_controller->moveUp();
            printField();
            //cout.flush() << "move up" << endl;
        }
        if (int(ch) == 80)
        {
            _player_controller->moveDown();
            printField();
            //cout.flush() << "move down" << endl;
        }
        
        ch = '0';
    }
}

inline void Game::initPlayer() noexcept
{
    int idy = rand() % 25 + 0;
    int idx = rand() % 25 + 0;
    
    Player* temp = new Player((Coordinate(idx, idy)));

    _player_controller = new PlayerIterruption(this, temp);
    _field[idy][idx] = temp;
}

inline void Game::initApples() noexcept
{
    for (int i = 0; i < MAX_APPLES; ++i)
    {
        int idy = rand() % 25 + 0;
        int idx = rand() % 25 + 0;
        if (_field[idy][idx] == nullptr)
        {
            _field[idy][idx] = new Apple;
        }
    }
}

Game::~Game()
{

}
