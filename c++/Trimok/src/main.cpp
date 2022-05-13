#include <stdio.h>
#include "Partida.h"
#include "Menu.h"
#include "jugadorMaquina.h"


int main() {
    //jugadorMaquina maquina;
    //cout << maquina.darJugada() << endl;
    Menu M;
    int op_juego;
    M.pintar_portada(op_juego);
    Partida prueba;
    prueba.ejecutarPartida();
    return 0;

}
