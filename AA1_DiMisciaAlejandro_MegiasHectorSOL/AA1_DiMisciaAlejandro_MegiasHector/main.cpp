#include "utils.h"
#include "tablero.h"
#include "input.h"
#include "ia.h"

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
		
		//Una vez puesta la ficha del jugador es hora de la IA
		IA_Jugador(tablero);
	}
	
}