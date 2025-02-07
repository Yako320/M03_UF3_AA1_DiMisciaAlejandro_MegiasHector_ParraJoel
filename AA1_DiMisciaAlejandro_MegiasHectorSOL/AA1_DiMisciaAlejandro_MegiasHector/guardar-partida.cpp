#include "utils.h"

void GuardarPartida(char tablero[MAX][MAX]) {

	std::string saveName;
	std::string fullName;
	bool rompebucles = false;
	while (!rompebucles) {

		std::cout << "Escribe el nombre con el que quieres guardar tu partida: ";
		std::cin >> saveName;
		if (saveName != "menu")
		{
			fullName = saveName + ".tictacsave";
			std::ifstream ficheroExistente;
			if (!ficheroExistente)
			{
				rompebucles = true;
			}
			else
			{
				short confirmacion;
				do
				{
					std::cout << "El archivo ya existe, quieres sobreescribir tu partida? (1=Si // 0=No)" << std::endl;
					std::cin >> confirmacion;
				} while (confirmacion < 0 || confirmacion > 1);
				rompebucles = confirmacion;
			}
		}
		else
		{
			std::cout << "El nombre introducido no es valido, prueba otra vez." << std::endl;
		}
	}
	

	std::ofstream guardarPartida;
	guardarPartida.open(fullName, std::ios::out | std::ios::app);
	if (guardarPartida.is_open())
	{
		for (int i = 0; i < MAX; i++) 
		{
			for (int j = 0; j < MAX; j++)
			{
				guardarPartida << tablero[j][i];
			}
			guardarPartida << "\n";
		}
	}

}