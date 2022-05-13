#include "Ficha.h"

Ficha::Ficha():posicionX{0},posicionY{0},color{'B'}, icono{}
{

}

Ficha::~Ficha(){
    //dtor
}

Ficha::Ficha(int y, int x, char color):posicionY{y},posicionX{x},color(color)
{
    icono;
    //icono.push_back(color);
}

string Ficha::getIconColor()
{
    return string(1, icono) + color;
}

void Ficha::setPosX(int nuevaX)
{posicionX = nuevaX;}

void Ficha::setPosY(int nuevaY)
{posicionY = nuevaY;}

int Ficha::getPosX() const
{return posicionX;}

int Ficha::getPosY() const
{return posicionY;}

char Ficha::getColor() const
{return color;}

char Ficha::getIcono()
{return icono;}
