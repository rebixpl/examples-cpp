#include <iostream>
#include <vector>
#include <conio.h>

// CONSTANTS
const bool DEBUG_SHOW_DEV_CONSOLE = true;
const int GAMEMAP_MAX_Y = 10;
const int GAMEMAP_MAX_X = 30;
const char backgroundChar = '.';
const char playerChar = '@';
// CONSTANTS

// FUNCTION DEFINITIONS
void RenderMap(char gameMap[GAMEMAP_MAX_Y][GAMEMAP_MAX_X], int &playerPosX, int &playerPosY);
void GetPlayerPos(int &playerPosX, int &playerPosY);
// FUNCTION DEFINITIONS

int main()
{
    // Variables
    int playerPosX = 0; // Player starting position X
    int playerPosY = 0; // Player starting position y
    // Variables

    // Making a game map and filling it with default '.' values
    char gameMap[GAMEMAP_MAX_Y][GAMEMAP_MAX_X] = {'.'};

    // Main game loop
    for (;;)
    {
        RenderMap(gameMap, playerPosX, playerPosY);
    }

    return 0;
}

void RenderMap(char gameMap[GAMEMAP_MAX_Y][GAMEMAP_MAX_X], int &playerPosX, int &playerPosY)
{
    for (short int i = 0; i < GAMEMAP_MAX_Y; i++)
    {
        for (short int k = 0; k < GAMEMAP_MAX_X; k++)
        {
            gameMap[i][k] = backgroundChar; // Filling map with background char

            // Rendering player
            if ((i == playerPosY) && (k == playerPosX))
            {
                gameMap[i][k] = playerChar;
            }

            std::cout << gameMap[i][k]; // Rendering map pixels on screen
        }
        std::cout << "\n";
    }
    GetPlayerPos(playerPosX, playerPosY);
    // Showing developer console
    system("CLS");
    if (DEBUG_SHOW_DEV_CONSOLE == true)
    {
        std::cout << "X:" << playerPosX << " "
                  << "Y:" << playerPosY;
        std::cout << "\n";
    }
}

void GetPlayerPos(int &playerPosX, int &playerPosY)
{
    char pressedKey = getch();
    switch (pressedKey)
    {
    case 'w':
        if (playerPosY > 0)
        {
            playerPosY--;
        };
        break;

    case 'W':
        if (playerPosY > 0)
        {
            playerPosY--;
        };
        break;

    case 's':
        if (playerPosY < GAMEMAP_MAX_Y - 1)
        {
            playerPosY++;
        };
        break;

    case 'S':
        if (playerPosY < GAMEMAP_MAX_Y - 1)
        {
            playerPosY++;
        };
        break;

    case 'a':
        if (playerPosX > 0)
        {
            playerPosX--;
        };
        break;

    case 'A':
        if (playerPosX > 0)
        {
            playerPosX--;
        };
        break;

    case 'd':
        if (playerPosX < GAMEMAP_MAX_X - 1)
        {
            playerPosX++;
        };
        break;

    case 'D':
        if (playerPosX < GAMEMAP_MAX_X - 1)
        {
            playerPosX++;
        };
        break;

    default:
        break;
    }
}
