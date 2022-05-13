#ifndef PARTIDA_H
#define PARTIDA_H

#include "Tablero.h"

class Partida
{
    Tablero tablero;
    int opcion;
    string posOrigen;
    string posDestino;
    bool turno;  // true: Piezas blancas, false: Piezas negras
public:
    Partida();
    ~Partida();
    void anunciarGanador() const;
    void ejecutarMovimiento();
    void ejecutarPartida();
};
#endif
