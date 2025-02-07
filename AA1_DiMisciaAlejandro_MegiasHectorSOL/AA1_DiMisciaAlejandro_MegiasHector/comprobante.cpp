#include "utils.h"

bool Victoria(char tablero[MAX][MAX]) {

    for (int i = 0; i < 3; i++) {
        if ((tablero[i][0] == jugador && tablero[i][1] == jugador && tablero[i][2] == jugador) || (tablero[0][i] == jugador && tablero[1][i] == jugador && tablero[2][i] == jugador)) {
            return true;
        }
        else if ((tablero[0][0] == jugador && tablero[1][1] == jugador && tablero[2][2] == jugador) || (tablero[0][2] == jugador && tablero[1][1] == jugador && tablero[2][0] == jugador)) {
            return true;
        }
        else
        {
            return false;
        }
    }
}

bool VictoriaIA(char tablero[MAX][MAX]) {

    for (int i = 0; i < 3; i++) {
        if ((tablero[i][0] == ia && tablero[i][1] == ia && tablero[i][2] == ia) || (tablero[0][i] == ia && tablero[1][i] == ia && tablero[2][i] == ia)) {
            return true;
        }
        else if ((tablero[0][0] == ia && tablero[1][1] == ia && tablero[2][2] == ia) || (tablero[0][2] == ia && tablero[1][1] == ia && tablero[2][0] == jugador)) {
            return true;
        }
        else
        {
            return false;
        }
    }
}

bool TableroLleno(char tablero[MAX][MAX]) {

    for (int i = 0; i < MAX; i++) {
        for (int j = 0; j < MAX; j++)
        {
            if (tablero[i][j] = ' ') {
                return false;
            }
            else
            {
                return true;
            }
        }
    }
}