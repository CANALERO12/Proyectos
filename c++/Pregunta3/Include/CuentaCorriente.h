/*
Nombre de archivo: CuentaCorriente.h
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
#ifndef CUENTACORRIENTE_H
#define CUENTACORRIENTE_H
#include <iostream>

class CuentaCorriente{

    private:
        int saldo;

    public:
        CuentaCorriente();
        ~CuentaCorriente();
        int darSaldo();
        void consignarSaldo(int valor);
        void retirarSaldo(int saldoRetirar);
        void actualizarSaldoPorMes();

};

#endif