#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

void render();
void renderPlayer(int x, int y);
void start();

//zmienne globalne

//rozmiar planszy do renderu
int mapSize = 10;
char buffor[10][10];

//znaki graficzne
char charBackground = '.'; 
char charPlayer = '@';

//pozycja gracza x i y oraz maksymalne wartosci
int xPlayer = 4; // 0-9
int yPlayer = 3; // 0-8

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
		}
		else if(keyPressed == 'd')
		{
			xPlayer++;
		}
		else if(keyPressed == 'w')
		{
			yPlayer--;
		}
		else if(keyPressed == 's')
		{
			yPlayer++;
		}
		
		//wyczyszczenie poprzedniego bufora obrazu
		system("CLS");
	}
	
}
