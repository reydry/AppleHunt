#include "FieldViewer.h"
#include "Game.h"
#include "Player.h"
#include "Field.h"
#include <iostream>
#include <iomanip>

FieldViewer::FieldViewer(Game* game) : _game(*game), _x(0)
{
    
}

FieldViewer::~FieldViewer()
{

}

void FieldViewer::setPlayer(Player* player)
{
    _player = player;
}

void FieldViewer::printImage(char image) noexcept
{
    std::cout.flush() << image;
}

void FieldViewer::printField() noexcept
{
    system("cls");
    Field* viewObj;
    std::cout.flush() << "---------------------------" << std::endl;
    for (int i = 0; i < MAX_COLS; ++i)
    {
        std::cout.flush() << "|";
        for (int j = 0; j < MAX_ROWS; ++j)
        {
            viewObj = _game.getCell(i, j);
            if (viewObj != nullptr)
            {
                printImage(viewObj->getImage());
            }
            else
            {
                printImage(DEFAULT_IMAGE);
            }
        }
        std::cout.flush() << "|" << std::endl;
    }
    std::cout.flush() << "---------------------------" << std::endl;
    printStat();
}

void FieldViewer::printMainMenu() noexcept
{
    system("cls");
    std::cout.flush() << "---------------------------" << std::endl;
    std::cout.flush() << "|" << std::setw(26) << "|" << std::endl;
    std::cout.flush() << "|" << std::setw(26) << "|" << std::endl;
    std::cout.flush() << "| |\\  /| |--- |\\  | |   | |" << std::endl;
    std::cout.flush() << "| | \\/ | |--- | \\ | |   | |" << std::endl;
    std::cout.flush() << "| |    | |--- |  \\| |___| |" << std::endl;
    for (int i = 0; i < 7; ++i)
    {
        std::cout.flush() << "|" << std::setw(26) << "|" << std::endl;
    }
   
    if (_x == 0)
    {
        std::cout.flush() << "|" << std::setw(10) << "-> play" << std::setw(16) << "|" << std::endl;
    }
    else
    {
        std::cout.flush() << "|" << std::setw(10) << " play" << std::setw(16) << "|" << std::endl;
    }

    if (_x == 1)
    {
        std::cout.flush() << "|" << std::setw(17) << "-> leaderboard" << std::setw(9) << "|" << std::endl;
    }
    else
    {
        std::cout.flush() << "|" << std::setw(17) << "leaderboard";
        std::cout.flush() << std::setw(9) << "|" << std::endl;
    }
    if (_x == 2)
    {
        std::cout.flush() << "|" << std::setw(10) << "-> exit" << std::setw(16) << "|" << std::endl;
    }
    else
    {
        std::cout.flush() << "|" << std::setw(10) << "exit" << std::setw(16) << "|" << std::endl;
    }
    for (int i = 0; i < 10; ++i)
    {
        std::cout.flush() << "|" << std::setw(26) << "|" << std::endl;
    }
    std::cout.flush() << "---------------------------" << std::endl;
}

inline void FieldViewer::printStat() noexcept
{
    std::cout.flush() << "score:" << _player->getScore();
}

void FieldViewer::moveUpMenu() noexcept
{
    --_x;
    if (_x > 3)
    {
        _x = 0;
    }
}

void FieldViewer::moveDownMenu() noexcept
{
    ++_x;
    if (_x > 2)
    {
        _x = 2;
    }    
}

unsigned FieldViewer::getX()
{
    return _x;
}

void FieldViewer::printLeaderboard() noexcept
{
    system("cls");
    std::cout.flush() << "---------------------------" << std::endl;
    for (int i = 0; i < 11; ++i)
    {
        std::cout.flush() << "|" << std::setw(26) << "|" << std::endl;
    }
    std::cout.flush() << "|  will be avaible soon   |" << std::endl;
    for (int i = 0; i < 11; ++i)
    {
        std::cout.flush() << "|" << std::setw(26) << "|" << std::endl;
    }
    std::cout.flush() << "---------------------------" << std::endl;
}
