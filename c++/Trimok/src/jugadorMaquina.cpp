#include "jugadorMaquina.h"


jugadorMaquina::jugadorMaquina()
{
    //ctor
}

jugadorMaquina::~jugadorMaquina()
{
    //dtor
}


string jugadorMaquina::darJugada(){
    return darColumna()+to_string(darFila());
}

int jugadorMaquina::darFila(){
    int aleatorio;
    srand (time(NULL));
    aleatorio = rand() % 6 + 1;
    cout << aleatorio << endl;
    return aleatorio;
}

char jugadorMaquina::darColumna(){
    srand (time(NULL));
    char letra = 65 + rand() % (70 - 65 + 1);
    cout << letra << endl;
    return letra;
}

