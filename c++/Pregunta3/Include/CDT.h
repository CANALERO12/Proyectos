/*
Nombre de archivo: Empresa.H
Version: 1.0
Fecha de creacion: 21/10/2021
Fecha de ultima modificacion: 21/10/2021
Autor: Santiago Marin Lozano
       Juan esteban Londo�o Gonzalez
       Daniel Felipe Gonzalez
       Andres Mauricio Arias Cortes
       Maher Lopez Rodriguez
Correo:
*/
#ifndef CDT_H
#define CDT_H

#include <iostream>
#include "Mes.h"

using namespace std;

class CDT{
    private:
        int valorInvertido;
        double interesMensual;
        int numeroMes;

    public:
        CDT();
        ~CDT();
        void invertir(int valorInvertido, double interesMensual, int numeroMes);
        int valorActual(Mes mesActual);
        int cerrar(Mes mesActual);
        double darInteresMensual();
};

#endif