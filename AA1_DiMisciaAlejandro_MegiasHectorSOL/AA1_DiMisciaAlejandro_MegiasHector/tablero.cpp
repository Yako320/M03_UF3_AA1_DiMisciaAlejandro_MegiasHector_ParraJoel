#include <iostream>
#include "utils.h"

void CrearTablero(char tablero[MAXH][MAXV]) {

	for (int i = 0; i < MAXV; i++)
	{
		for (int j = 0; j < MAXH; j++)
		{
			tablero[j][i] = ' ';
		}
	}

}

void MostrarTablero(char tablero[MAXH][MAXV]) {

	for (int i = 0; i < MAXVPRINT; i++)
	{
		short contador = 0;
		if (i % 2)
		{
			for (int j = 0; j < MAXH; j++)
			{
				std::cout << '|';
				std::cout << ' ';
				std::cout << tablero[j][contador];
				std::cout << ' ';
			}
			std::cout << '|';
			contador++;
		}
		else
		{
			for (int j = 0; j < MAXHPRINT; j++)
			{
				std::cout << '-';
			}
		}
		std::cout << std::endl;
	}
	
}