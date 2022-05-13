#include "Ficha.h"

class CTijeras:public Ficha{
    public:
    CTijeras();
    ~CTijeras();
    CTijeras(int x, int y, char color);
    bool hacerMovimiento(int x, int y);
};

class CPiedra:public Ficha{
    public:
    CPiedra();
    ~CPiedra();
    CPiedra(int x, int y, char color);
    bool hacerMovimiento(int x, int y);
};

class CPapel:public Ficha{
    public:
    CPapel();
    ~CPapel();
    CPapel(int x, int y, char color);
    bool hacerMovimiento(int x, int y);
};
