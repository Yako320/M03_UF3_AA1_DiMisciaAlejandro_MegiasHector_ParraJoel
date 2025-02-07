#include "utils.h"
#include "tablero.h"
#include "input.h"
#include "ia.h"
#include "comprobante.h"

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

		//Comprobamos si el tablero esta lleno
		if (TableroLleno(tablero))
		{
			system("CLS");
			MostrarTablero(tablero);
			std::cout << "El tablero esta lleno, es un empate!";
			gameOver = true;
		}
		else 
		{
			//Una vez puesta la ficha del jugador es hora de la IA
			IA_Jugador(tablero);
		}


		//Cada turno hacemos las comprobaciones para ver si se ha acabado el juego
		if (Victoria(tablero))
		{
			system("CLS");
			MostrarTablero(tablero);
			std::cout << "El ganador del 3 en raya es el Jugador! Enhorabuena!";
			gameOver = true;
		}
		else if (VictoriaIA(tablero))
		{
			system("CLS");
			MostrarTablero(tablero);
			std::cout << "El ganador del 3 en raya es la IA... Mucha suerte para la proxima vez";
			gameOver = true;
		}
	}
}