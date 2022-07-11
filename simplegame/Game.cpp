#include "Game.h"
#include "Player.h"
#include <ctime>
#include <iostream>

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
        for (int j = 0; j < MAX_ROWS; j++)
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

void Game::initGame() noexcept
{
    srand(time(NULL));
    initField();
    initPlayer();
    printField();
}

inline void Game::initPlayer() noexcept
{
    int idy = rand() % 25 + 0;
    int idx = rand() % 25 + 0;
    _field[idy][idx] = new Player;
}

inline void Game::initApples() noexcept
{
}

Game::~Game()
{
}
