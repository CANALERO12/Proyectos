/*
  Nombre: Triangulo.cpp
  Autor: IPOO - Univalle Tulua
  Fecha Creacion: 2020
  Fecha Modificaci�n: 2020
  Versi�n : 1.0
  Email: suMail
*/

#include "Triangulo2.h"

Triangulo::Triangulo(){
    //Constructor
}

Triangulo::~Triangulo(){
    //destructor
}

Triangulo::Triangulo(Punto dPunto1,Punto dPunto2, Punto dPunto3)
{
    punto1 = dPunto1;
    punto2 = dPunto2;
    punto3 = dPunto3;
}

//utilice la formula de la distancia entre dos puntos para el m�todo darLado1.
//es necesario utilizar las funciones pow(x,2), sqrt(y) de la biblioteca cmath

double Triangulo::calcularLado1()
{
    //calcula las restas
    double valorX = punto1.darX() - punto2.darX(); //completarlo
    double valorY = punto1.darY() - punto2.darY();

    //calcula la distancia
    double distancia = sqrt(pow(valorX, 2) + pow(valorY, 2)); //completarlo
    return distancia;
}

double Triangulo::calcularLado2()
{
    double valorX = punto2.darX() - punto3.darX(); //completarlo
    double valorY = punto2.darY() - punto3.darY();

    //calcula la distancia
    double distancia = sqrt(pow(valorX, 2) + pow(valorY, 2)); //completarlo
    return distancia;
}

double Triangulo::calcularLado3()
{
    double valorX = punto1.darX() - punto3.darX(); //completarlo
    double valorY = punto1.darY() - punto3.darY();

    //calcula la distancia
    double distancia = sqrt(pow(valorX, 2) + pow(valorY, 2)); //completarlo
    return distancia;
}

double Triangulo::calcularPerimetro()
{
    return calcularLado1() + calcularLado2() + calcularLado3();
}

//Para calcular el area se puede utilizar la siguiente ecuaci�n
//RaizCuadrada(s * (s - Lado1) * (s - Lado2) * (s - Lado3))
//Donde s = perimetro / 2

double Triangulo::calcularArea() //falta por implementar con base en la informacion anterior
{   
    double semiPerimetro = calcularPerimetro()/2;
    double lado1 = calcularLado1();
    double lado2 = calcularLado2();
    double lado3 = calcularLado3();
    double area = sqrt(semiPerimetro*(semiPerimetro - lado1)*(semiPerimetro - lado2)*(semiPerimetro - lado3));
    return area;
}

//Tenga en cuenta que area = (base * altura)/2
//Es necesario despejar altura
double Triangulo::calcularAltura() // falta por implementar
{
    double altura = calcularArea()*2/calcularLado1();
    return altura;
}