#ifndef JUGADORMAQUINA_H
#define JUGADORMAQUINA_H
#include "Tablero.h"
#include <iostream>
#include <string>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

using namespace std;

class jugadorMaquina // hereda de jugador
{
    private:

    public:
        jugadorMaquina();
        virtual ~jugadorMaquina();
        string darJugada();
        int darFila();
        char darColumna();

};

#endif // JUGADORMAQUINA_H
