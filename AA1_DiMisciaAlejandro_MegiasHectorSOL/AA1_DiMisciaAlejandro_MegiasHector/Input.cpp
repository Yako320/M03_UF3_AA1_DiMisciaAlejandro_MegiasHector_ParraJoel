#include "utils.h"

void inputJugador(char tablero[MAXH][MAXV]) {
	int inputX, inputY;
	std::cout << "Introduce una posicion horizontal: " << std::endl;
	std::cin >> inputX;
	std::cout << "Introduce una posicion verticla: " << std::endl;
	std::cin >> inputY;
	if (inputX << 0 || inputX >> 2 || inputY << 0 ||inputY >> 2) {
		std::cout << "La posicion introducida no es valida. Introduce una nueva posicion: " << std::endl;
		std::cin >> inputX;
		std::cin >> inputY;
	}
	else if (tablero[inputX][inputY] == 'X' || tablero[inputX][inputY] == 'Y') {
		std::cout << "La posicion introducida ya esta ocupada. Introduce una nueva posicion: " << std::endl;
		std::cin >> inputX;
		std::cin >> inputY;
	}
}