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
#ifndef CLIENTE_H
#define CLIENTE_H

#include <iostream>
#include "CuentaCorriente.h"
#include "CuentaAhorros.h"
#include "CDT.h"
#include <string>

class Cliente {

    private:
        string nombre;
        string cedula;
        CuentaCorriente cuentaCorriente;
        CuentaAhorros cuentaAhorros;
        CDT cdt;
        Mes mes;

    public:
        Cliente();
        Cliente(string nombre, string cedula, CuentaCorriente cuentaCorriente, CuentaAhorros cuentaAhorros, CDT cdt, Mes mes);
        ~Cliente();
        void setNombre(string nombre);
        void setCedula (string cedula);
        string getNombre();
        string getCedula();
        void invertirCDT(int monto, double interesMensual);
        void consignarCuentaCorriente(int valor);
        void consignarCuentaAhorro(int valor);
        void cerrarCDT();
        void retirarCuentaCorriente(int valor);
        void retirarCuentaAhorro(int valor);
        double  saldoTotal();
        CuentaCorriente darCuentaCorriente();
        CuentaAhorros darCuentaAhorro();
        Mes darMesActualSimulacion();
        Mes avanzarMesSimulacion();
};

#endif