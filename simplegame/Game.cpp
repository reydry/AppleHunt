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

inline void Game::processGame() noexcept
{
    char ch = '0';
    int idx(0), idy(0);
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
            //_player->
        }
        if (int(ch) == 75)
        {
            
        }
        ch = '0';
    }
}

inline void Game::initPlayer() noexcept
{
    int idy = rand() % 25 + 0;
    int idx = rand() % 25 + 0;
    
    Player* temp = new Player((Coordinate(idy, idx)));

    _player = new PlayerIterruption(this, temp);
    _field[idy][idx] = temp;

    //_player = new Player(Coordinate(idy, idx));
    // = _player;

    //_playerCoordinate.setCoord(idx, idy);
    //_field[idy][idx] = new Player(_playerCoordinate);
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
