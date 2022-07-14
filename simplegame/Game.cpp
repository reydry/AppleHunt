#include "Game.h"
#include "Player.h"
#include "Apple.h"
#include <ctime>
#include <iostream>
#include <conio.h>
#include "FieldViewer.h"

using namespace std;

Game::Game()
{
   
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
    initApples();
    initPlayer();
}

void Game::runGame() noexcept
{
    srand(time(NULL));
    initViewer();
    processMainMenu();
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

Field* Game::getCell(unsigned x, unsigned y) noexcept
{
    if (_field[y][x] == nullptr)
    {
        return nullptr;
    }
    else
    {
        return _field[y][x];
    };
}

void Game::clearCell(Coordinate coord) noexcept
{
    
    idy = rand() % 25 + 0;
    idx = rand() % 25 + 0;
    if (_field[idy][idx] == nullptr)
    {
        _field[idy][idx] = new Apple;
    }
    _field[coord.getY()][coord.getX()]->~Field();
    _field[coord.getY()][coord.getX()] = nullptr;
}

void Game::processMainMenu() noexcept
{
    char ch = '0';
    _console_viewer->printMainMenu();
    while (1)
    {
        if (_kbhit())
        {
            ch = _getch();
        }

        if (int(ch) == 27)
        {
            system("cls");
            exit(0);
        }

        if (int(ch) == 72)
        {
            _console_viewer->moveUpMenu();
            _console_viewer->printMainMenu();
            //cout.flush() << "move up" << endl;
        }

        if (int(ch) == 80)
        {
            _console_viewer->moveDownMenu();
            _console_viewer->printMainMenu();
            //cout.flush() << "move down" << endl;
        }
        if (int(ch) == 13)
        {
            unsigned pos = _console_viewer->getX();
            switch (pos)
            {
            case 0:
            {
                processGame();
                break;
            }
            case 1:
            {
                _console_viewer->printLeaderboard();
                break;
            }
            case 2:
            {
                system("cls");
                exit(0);
                break;
            }
            default:
                break;
            }
        }
        ch = '0';
    }
}

inline void Game::clearField() noexcept
{
    for (int i = 0; i < MAX_ROWS; ++i)
    {
        for (int j = 0; j < MAX_COLS; ++j)
        {
            if (_field[i][j] != nullptr)
            {
                _field[i][j]->~Field();
                _field[i][j] = nullptr;
            }
        }
    }
}

inline void Game::initViewer() noexcept
{
    _console_viewer = new FieldViewer(this);
}

inline void Game::processGame() noexcept
{
    initGame();
    char ch = '0';
    _console_viewer->printField();
    while (1)
    {
        if (_kbhit())
            ch = _getch();
        if (int(ch) == 27)
        {
            
            break;
        }
        if (int(ch) == 80)
        {
            _player_controller->moveRight();
            _console_viewer->printField();
            //cout.flush() << "move right!" << endl;
        }
        if (int(ch) == 72)
        {
            _player_controller->moveLeft();
            _console_viewer->printField();
            //cout.flush() << "move left" << endl;
        }
        if (int(ch) == 75)
        {
            _player_controller->moveUp();
            _console_viewer->printField();
            //cout.flush() << "move up" << endl;
        }
        if (int(ch) == 77)
        {
            _player_controller->moveDown();
            _console_viewer->printField();
            //cout.flush() << "move down" << endl;
        }
        
        ch = '0';
    }
    clearField();
    processMainMenu();
}

inline void Game::initPlayer() noexcept
{
    int idy = rand() % 25 + 0;
    int idx = rand() % 25 + 0;
    
    Player* temp = new Player((Coordinate(idx, idy)));

    _player_controller = new PlayerIterruption(this, temp);
    _field[idy][idx] = temp;
    _console_viewer->setPlayer(temp);
}

inline void Game::initApples() noexcept
{
    int idy;
    int idx;
    for (int i = 0; i < MAX_APPLES; ++i)
    {
        idy = rand() % 25 + 0;
        idx = rand() % 25 + 0;
        if (_field[idy][idx] == nullptr)
        {
            _field[idy][idx] = new Apple;
        }
    }
}

Game::~Game()
{

}
