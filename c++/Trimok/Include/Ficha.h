#ifndef FICHA_H
#define FICHA_H
#include <vector>
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

class Ficha{
    protected:
    int posicionX;
    int posicionY;
    char color;
    char icono;

    public:
    Ficha();
    ~Ficha();
    Ficha(int x, int y, char color);
    void setPosX(int nuevaX);
    void setPosY(int nuevaY);
    int getPosX()const;
    int getPosY()const;
    string getIconColor();
    char getIcono();
    char getColor() const;
    virtual bool hacerMovimiento(int x, int y, Ficha*casilla) = 0;
};
#endif
