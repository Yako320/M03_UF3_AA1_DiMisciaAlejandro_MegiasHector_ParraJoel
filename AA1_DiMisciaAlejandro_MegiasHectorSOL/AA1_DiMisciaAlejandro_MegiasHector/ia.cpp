#include "utils.h"

void IA_Jugador(char tablero[MAX][MAX]) {

	srand(time(NULL));
	int x, y;
	bool rompebucles = false;
	while (!rompebucles)
	{
		x = rand() % MAX;
		y = rand() % MAX;
		if (tablero[x][y] == ' ')
		{
			rompebucles = true;
		}
	}
	std::cout << "La IA ha jugado su ficha en X: " << x << " Y: " << y << std::endl;
	tablero[x][y] = ia;
}