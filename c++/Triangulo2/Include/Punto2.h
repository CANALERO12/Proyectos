/*
  Nombre: Punto.h
  Autor: IPOO - Univalle Tulua
  Fecha Creacion: 2020
  Fecha Modificaci�n: 2020
  Versi�n : 1.0
  Email: suMail
*/

#ifndef PUNTO_H
#define PUNTO_H
/*
   Clase: Punto
   Responsabilidad:
    - Simula ser un punto  del plano cartesiano,de coordenadas (x,y).
    - A traves de ella, podemos crear, cambiar y devolver puntos en el plano cartesiano.
   Colaboracion: ninguna
*/


class Punto
{
  //ATRIBUTOS
  private:
     double x;
     double y;
  //METODOS
  public:
  Punto();
  Punto(double dX, double dY);
	~Punto();
	double darX();
  double darY();
	void cambiarX(double x1);
	void cambiarY(double y1);
};
#endif
