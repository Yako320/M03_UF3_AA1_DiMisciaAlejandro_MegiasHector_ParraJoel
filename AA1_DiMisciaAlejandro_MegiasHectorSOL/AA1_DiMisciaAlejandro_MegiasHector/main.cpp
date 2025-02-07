#include "utils.h"
#include "tablero.h"
#include "input.h"
#include "ia.h"
#include "comprobante.h"

void main() {

	//Creamos nuestro tablero y variables para el juego
	char tablero[MAX][MAX];
	bool gameOver = false, salir = false;
	int opcio;

	//Lo inicializamos
	CrearTablero(tablero);

	//Comienza el juego
	while (!salir) {
		gameOver = false;
		//Comienza el juego
		std::cout << "------------ Tres en ratlla ------------";
		std::cout << "\n";
		std::cout << "1 - Nova partida" << std::endl;
		std::cout << "2 - Carregar partida" << std::endl;
		std::cout << "3 - Sortir" << std::endl;
		std::cout << "\n";
		std::cout << "Tria una opcio: ";
		std::cin >> opcio;

		switch (opcio)
		{
		case 1:
			while (!gameOver) {
				//Mostramos el tablero
				MostrarTablero(tablero);

				//Le pedimos el input al usuario
				InputJugador(tablero);

				if (Victoria(tablero))
				{
					system("CLS");
					MostrarTablero(tablero);
					std::cout << "El ganador del 3 en raya es el Jugador! Enhorabuena!" << std::endl;
					std::cout << "\n";
					gameOver = true;
				}
				else 
				{
					//Comprobamos si el tablero esta lleno
					if (TableroLleno(tablero))
					{
						system("CLS");
						MostrarTablero(tablero);
						std::cout << "El tablero esta lleno, es un empate!" << std::endl;
						std::cout << "\n";
						gameOver = true;
					}
					else
					{
						//Una vez puesta la ficha del jugador es hora de la IA
						IA_Jugador(tablero);
					}

					//Cada turno hacemos las comprobaciones para ver si se ha acabado el juego
					if (VictoriaIA(tablero))
					{
						system("CLS");
						MostrarTablero(tablero);
						std::cout << "El ganador del 3 en raya es la IA... Mucha suerte para la proxima vez" << std::endl;
						std::cout << "\n";
						gameOver = true;
					}
				}
			}
			break;
		case 2:
			break;
		case 3:
			salir = true;
			break;
		}
	}
}