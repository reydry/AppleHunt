// simplegame.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
#include "Game.h"
#include <iostream>
using namespace std;

/*0int arr[3][10]{{1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
                {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
                {1, 1, 1, 1, 1, 0, 1, 1, 1, 1} };

void testInput()
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
            for (int i = 0; i < 3; ++i)
            {
                for (int j = 0; j < 10; j++)
                {
                    if (arr[i][j] == 0)
                    {
                        idy = i;
                        idx = j;
                    }
                }
            }
            arr[idy - 1][idx] = 2;
            printArray();
            //cout.flush() << "shoot!" << endl;
        }

        if (int(ch) == 77)
        {
            for (int i = 0; i < 3; ++i)
            {
                for (int j = 0; j < 10; j++)
                {
                    if (arr[i][j] == 0)
                    {
                        idy = i;
                        idx = j;
                    }
                }
            }
            swap(arr[idy][idx], arr[idy][idx + 1]);
            printArray();
            //cout.flush() << "move right!"<<endl;
        }
        if (int(ch) == 75)
        {
            //pos = find(arr.begin(), arr.end(), '-');
            for (int i = 0; i < 3; ++i)
            {
                for (int j = 0; j < 10; j++)
                {
                    if (arr[i][j] == 0)
                    {
                        idy = i;
                        idx = j;
                    }
                }
            }
            swap(arr[idy][idx], arr[idy][idx - 1]);
            printArray();
            //cout.flush() << "move left" << endl;
        }
        ch = '0';
    }
}

void Engine()
{
    testInput();
}
*/
int main()
{
    system("mode con cols=27 lines=28");
    Game *game = new Game;
    game->runGame();
    system("pause>NUL");
}