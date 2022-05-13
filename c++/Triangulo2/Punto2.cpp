/*
  Nombre: Punto.cpp
  Autor: IPOO - Univalle Tulua
  Fecha Creacion: 2020
  Fecha Modificaci�n: 2020
  Versi�n : 1.0
  Email: suMail
*/

#include "Punto2.h"

Punto::Punto()
{
    x=0;
    y=0;
}

Punto::Punto(double dX, double dY )
{
    x = dX;
    y = dY;
}

Punto::~Punto()
{
}

void Punto::cambiarX(double x1)
{
    x = x1;
}

void Punto::cambiarY(double y1)
{
    y = y1;
}

double Punto::darX()
{
    return x;
}

double Punto::darY()
{
    return y;
}
