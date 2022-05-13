#ifndef FICHASHIJAS_H
#define FICHASHIJAS_H

#include "Ficha.h"

class CTijeras:public Ficha{

    public:
    CTijeras();
    CTijeras(int x, int y, char color);
    ~CTijeras();
    bool hacerMovimiento(int y, int x, Ficha* casilla);
};

class CPiedra:public Ficha{
    public:
    CPiedra();
    CPiedra(int x, int y, char color);
    ~CPiedra();
    bool hacerMovimiento(int y, int x, Ficha* casilla);
};

class CPapel:public Ficha{
    public:
    CPapel();
    CPapel(int x, int y, char color);
    ~CPapel();
    bool hacerMovimiento(int y, int x, Ficha* casilla);
};

#endif
