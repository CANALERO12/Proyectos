/*
Nombre de archivo: Empleado.h
Version: 0.1
Fecha de creacion: 23/09/2021
Fecha de ultima modificacion: 23/09/2021
Autor: Miguel Askar
Correo: miguel.askar@correounivalle.edu.co
*/

/* CRC
Clase: Empleado
Responsabilidad: Cambiar y mostrar el salario, calcular edad, prestaciones y antiguedad del empleado.
Colaboracion: Fecha.h
*/

#ifndef EMPLEADO_H
#define EMPLEADO_H
#include "Fecha.h"
#include <string>

using namespace std;

class Empleado
{
    public:
        Empleado();
        virtual ~Empleado();
        Empleado(string nombre, string apellido, char sexo, bool estadoCivil, int salario, Fecha fechaNacimiento, Fecha fechaIngreso, int numeroHijos);
        //Getters
        string getNombre();
        string getApellido();
        char getSexo();
        int getSalario();
        int getNumeroHijos();
        bool getEstadoCivil();
        //Metodos
        void cambiarSalario(int nuevoSalario);
        string comprobarEstadoCivil(bool n);
        int calcularAuxilioConyugal(bool m);
        int calcularEdad();
        int calcularPrestaciones();
        int calcularAntiguedad();
        int calcularDiferenciaSalarial(Empleado otroEmpleado);
        double auxilioEducativo();

    private:
        string nombre;
        string apellido;
        char sexo; //M= masculino, F= femenino
        bool estadoCivil;
        int salario;
        Fecha fechaNacimiento;
        Fecha fechaIngreso;
        int numeroHijos;
};

#endif // EMPLEADO_H
