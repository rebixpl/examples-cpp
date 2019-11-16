#include <iostream>
#include <string>
#include <conio.h>
#include <cstdlib>

using namespace std;

void render();
void renderPlayer(int x, int y);
void renderEnemyFac(int x, int y);
void start();

//zmienne globalne

//rozmiar planszy do renderu
int mapSize = 10;
char buffor[10][10];

//znaki graficzne
char charBackground = '.';
char charPlayer = '@';
char charFAC = 'O';

//pozycja gracza x i y oraz maksymalne wartosci
int xPlayer = 4; // 0-9
int yPlayer = 3; // 0-8

//pozycja Faca
int xFac = 5;
int yFac = 6;

//aktualnie wcisniety przycisk
char keyPressed;

int main()
{
	start();
	return 0;
}

void render()
{
	for (int i = 0; i < mapSize; i++) // zmiana rozmiaru planszy -> i
	{
		for (int k = 0; k < mapSize; k++) // zmiana rozmiaru planszy -> k
		{
			buffor[i][k] = charBackground;

			renderPlayer(xPlayer, yPlayer);

            renderEnemyFac(xFac, yFac);

			//cout << k << endl;
			if (k == (mapSize - 1)) // zmiana rozmiaru planszy -> k - 1
				cout << endl;
			else
				cout << buffor[i][k];
		}
	}
}

void renderPlayer(int x, int y)
{
	buffor[y][x] = charPlayer;
}

void renderEnemyFac(int x, int y)
{
    buffor[y][x] = charFAC;
}

void start()
{
	//MAIN GAME LOOP
	for(;;)
	{
		//wywolanie funkcji render planszy
		render();


		//cin >> keyPressed;
		keyPressed = getch();

		if(keyPressed == 'a')
		{
			xPlayer--;
			xFac++;
		}
		else if(keyPressed == 'd')
		{
			xPlayer++;
			xFac++;
		}
		else if(keyPressed == 'w')
		{
			yPlayer--;
			yFac++;
		}
		else if(keyPressed == 's')
		{
			yPlayer++;
			yFac--;
		}

		//wyczyszczenie poprzedniego bufora obrazu
		system("CLS");
	}

}
