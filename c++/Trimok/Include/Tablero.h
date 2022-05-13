#ifndef TABLERO_H
#define TABLERO_H
#include <iostream>
#include "FichasHijas.h"
#include "Ficha.h"
#include <vector>
using namespace std;

const unsigned int X = 6;
const unsigned int Y = 6;

class Tablero
{
  private:
        unsigned int tamanoX;
        unsigned int tamanoY;
        unsigned int numeroFichas;
        Ficha**fichasEliminadas;
        Ficha**listaPiezas; //Listas de piezas indicada **

    public:
         Tablero();
        ~Tablero();
        void imprimirTabla();
        bool posicionValida(string pos) const;
        Ficha* buscarPieza(int y, int x);
        void eliminarPieza(int y, int x);
        bool moverPieza(int y1, int x1, int y2, int x2, bool turno);
};
#endif
