#include <iostream>
#include "utils.h"

void CrearTablero(char tablero[MAX][MAX]) {

	for (int i = 0; i < MAX; i++)
	{
		for (int j = 0; j < MAX; j++)
		{
			tablero[j][i] = ' ';
		}
	}

}

void MostrarTablero(char tablero[MAX][MAX]) {

	for (int i = 0; i < MAXVPRINT; i++)
	{
		short contador = i / 2;
		if (i % 2)
		{
			for (int j = 0; j < MAX; j++)
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