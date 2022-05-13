/*
  Nombre: Triangulo.h
  Autor: IPOO - Univalle Tulua
  Fecha Creacion: 2020
  Fecha Modificacion: 2020
  Version : 1.0
  Email: suMail
*/

#ifndef TRIANGULO_H
#define TRIANGULO_H
/*
   Clase: Triangulo
   Responsabilidad:
   -Almacena los puntos de un plano cartesiano con referencia a un triangulo
   -calcula los lados, calcula perimetro, calcula la altura y calcula el area
   Colaboracion: Punto2.h
*/

#include "Punto2.h"
#include <cmath> //esta biblioteca sirve para utilizar los m�todos matematicos por ej:
                 //sqrt(y), pow(x,p)

class Triangulo
{
  //ATRIBUTOS
  private:
     Punto punto1;
     Punto punto2;
     Punto punto3;

     //METODOS
  public:
  Triangulo();
  ~Triangulo();
  Triangulo(Punto dPunto1, Punto dPunto2, Punto dPunto3);
	double calcularLado1();
	double calcularLado2();
	double calcularLado3();
	double calcularPerimetro();
	double calcularArea();
	double calcularAltura();
};
#endif
