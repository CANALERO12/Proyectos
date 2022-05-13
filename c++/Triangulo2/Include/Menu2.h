/*
  Nombre: Menu2.h
  Autor: IPOO - Univalle Tulua
  Fecha Creacion: 2020
  Fecha Modificaci�n: 2020
  Versi�n : 1.0
  Email: suMail
*/
#ifndef MENU_H
#define MENU_H

/*
   Clase: Menu2.h
   Responsabilidad:
   - ejecuta e inicializa las opciones que el usuario ingrese para hallar
    -Area
    -Perimetro
    -Altura
   Colaboracion: Triangulo2.h
*/

#include<iostream>
#include "Triangulo2.h"


class Menu
{
  //ATRIBUTOS
private:
  int opcion;
  Triangulo TrianguloPrueba;
  Punto punto1Triangulo;
  Punto punto2Triangulo;
  Punto punto3Triangulo;
  double Perimetro, Area, Altura;

  //METODOS
public:
        Menu();
        virtual ~Menu();
        void seleccionarOpcion();
        void mostrarPuntosDelPlano();
        void mostrarDatosTriangulo();
        void visualizar();
};

#endif