#ifndef MENU_H
#define MENU_H
#include "Empleado.h"
#include <iostream>

class Menu
{
    public:
        Menu();
        virtual ~Menu();
        void seleccionarOpcion();
        void mostrarDatosPersonales();
        void mostrarCalculos();
        void visualizar();

    private:
        int opcion;
        Empleado empleado1;
        Empleado empleado2;
        Fecha fechaNacimiento;
        Fecha fechaIngreso;
        int edad, antiguedad, prestaciones, auxilioConyugal;
};

#endif // MENU_H
