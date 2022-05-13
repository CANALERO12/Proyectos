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
#ifndef CUENTAAHORROS_H
#define CUENTAAHORROS_H

#include <iostream>
using namespace std;

class CuentaAhorros{

    private:
        int saldo;
        double interesMensual;

    public:
        CuentaAhorros();
        ~CuentaAhorros();
        int darSaldo();
        void consignarSaldo(int valor);
        void retirarSaldo(int valor);
        void actualizarSaldoPorMes();
        double darInteresMensual();

};

#endif