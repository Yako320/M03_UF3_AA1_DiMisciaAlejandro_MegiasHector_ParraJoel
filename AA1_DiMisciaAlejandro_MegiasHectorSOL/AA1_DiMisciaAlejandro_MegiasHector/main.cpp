#include "utils.h"
#include "tablero.h"
#include "input.h"

void main() {

	//Creamos nuestro tablero y variables para el juego
	char tablero[MAX][MAX];
	bool gameOver = false;

	//Lo inicializamos
	CrearTablero(tablero);

	//Comienza el juego

	while (!gameOver)
	{
		//Mostramos el tablero
		MostrarTablero(tablero);

		//Le pedimos el input al usuario
		InputJugador(tablero);
	}
	
}