// simplegame.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
#include "Game.h"
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    system("mode con cols=27 lines=28");
   
    Game *game = new Game;
    game->runGame();
    system("pause>NUL");
}

/*void testInput()
{
    char ch='0';

    int idx, idy;
    while (1)
    {
        if (_kbhit())
            ch = _getch();
        if (int(ch) == 27)
        {
            break;
        }
        if (int(ch) == 32)
        {
            cout.flush() << "shoot!" << endl;
        }

        if (int(ch) == 77)
        {
            cout.flush() << "move right!"<<endl;
        }
        if (int(ch) == 75)
        {
            cout.flush() << "move left" << endl;
        }
        if (int(ch) == 72)
        {
            cout.flush() << "move up" << endl;
        }
        if (int(ch) == 80)
        {
            cout.flush() << "move down" << endl;
        }
        ch = '0';
    }
}
*/