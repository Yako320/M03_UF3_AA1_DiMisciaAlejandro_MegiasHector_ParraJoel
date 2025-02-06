#include "utils.h"
#include "tablero.h"

void main() {

	//Creamos nuestro tablero
	char tablero[MAXH][MAXV];


	//Lo inicializamos y mostramos
	CrearTablero(tablero);
	MostrarTablero(tablero);
}