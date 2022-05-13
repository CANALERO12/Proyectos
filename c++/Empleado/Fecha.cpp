/*
Nombre de archivo: Fecha.g
Version: 0.1
Fecha de creacion: 16/09/2021
Fecha de ultima modificacion: 16/09/2021
Autor: Miguel Askar
Correo: miguel.askar@correounivalle.edu.co
*/


#include "Fecha.h"

Fecha::Fecha()
{
    //ctor
}

Fecha::~Fecha()
{
    //dtor
}

Fecha::Fecha(int nuevoDia, int nuevoMes, int nuevoAnio) {
    dia = nuevoDia;
    mes = nuevoMes;
    anio = nuevoAnio;
}

int Fecha::darDia() {
    return dia;
}

int Fecha::darMes() {
    return mes;
}

int Fecha::darAnio() {
    return anio;
}

int Fecha::calcularDiferencia(Fecha otraFecha) {
    int diferenciaAnios = otraFecha.darAnio() - anio;
    int diferenciaMeses = otraFecha.darMes() - mes;
    int diferenciaDias = otraFecha.darDia() - dia;
    if(diferenciaMeses > 0) {
        return diferenciaAnios--;
    } else {
        if(diferenciaDias < 0) {
           return diferenciaAnios--;
        }
    }
    return diferenciaAnios;
}



