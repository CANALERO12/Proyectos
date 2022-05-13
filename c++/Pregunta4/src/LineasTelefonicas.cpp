/*
Nombre de archivo: LineasTelefonicas.cpp
Version: 2.0
Fecha de creacion: 21/10/2021
Fecha de ultima modificacion: 27/10/2021
Autor: Santiago Marin Lozano
       Juan esteban Londo�o Gonzalez
       Daniel Felipe Gonzalez
       Andres Mauricio Arias Cortes
       Maher Lopez Rodriguez
Correos:
andres.mauricio.arias@correounivalle.edu.co
daniel.gonzalez.melendez@correounivalle.edu.co
juan.esteban.londono@correounivalle.edu.co
maher.lopez@correounivalle.edu.co
santiago.marin.lozano@correounivalle.edu.co

*/

#include "../LineasTelefonicas.h"

LineasTelefonicas::LineasTelefonicas(){ // constructor
    numeroDeLlamadas = 0;
    duracionLlamada = 0;
    costoLlamada = 0;
}

LineasTelefonicas:: ~LineasTelefonicas(){
    //destructor
}

int LineasTelefonicas::darNumeroLlamadas(){
    return numeroDeLlamadas;
}

int LineasTelefonicas::darDuracionDeLlamada(){
    return duracionLlamada;
}

int LineasTelefonicas::darCostoLlamada(){
    return costoLlamada;
}

int LineasTelefonicas::llamadaLargaDistancia(int minutos){
    numeroDeLlamadas++;
    duracionLlamada += minutos;
    costoLlamada += (minutos * 150);
    return 0;
}

int LineasTelefonicas::llamadasLocales(int minutos){
    numeroDeLlamadas++;
    duracionLlamada += minutos;
    costoLlamada += (minutos * 50);
    return 0;
}

int LineasTelefonicas::llamadaCelulares(int minutos){
    numeroDeLlamadas++;
    duracionLlamada += minutos;
    costoLlamada += (minutos * 200);
    return 0;
}
