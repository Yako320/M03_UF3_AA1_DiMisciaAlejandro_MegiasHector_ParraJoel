#include "utils.h"

void InputJugador(char tablero[MAX][MAX]) {
	int inputX, inputY;
	bool rompebucles = false;

	while (!rompebucles)
	{
		std::cout << "Introduce una posicion horizontal: " << std::endl;
		std::cin >> inputX;
		std::cout << "Introduce una posicion verticla: " << std::endl;
		std::cin >> inputY;
		if (inputX < 0 || inputX == MAX || inputY < 0 || inputY == MAX) {
			std::cout << "La posicion introducida no es valida. Introduce una nueva posicion: " << std::endl;
		}
		else if (tablero[inputX][inputY] != ' ') {
			std::cout << "La posicion introducida ya esta ocupada. Introduce una nueva posicion: " << std::endl;
		}
		else
		{
			rompebucles = true;
		}
	}
	tablero[inputX][inputY] = 'X';
}