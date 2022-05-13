#include "Empleado.h"
#include <cmath>

using namespace std;

Empleado::Empleado()
{
    //ctor
}

Empleado::~Empleado()
{
    //dtor
}

Empleado::Empleado(string nombre,
                   string apellido,
                   char sexo, bool estadoCivil,
                   int salario,
                   Fecha fechaNacimiento,
                   Fecha fechaIngreso,
                   int numeroHijos) {
    this->nombre = nombre;
    this->apellido = apellido;
    this->sexo = sexo;
    this->estadoCivil = estadoCivil;
    this->salario = salario;
    this->fechaNacimiento = fechaNacimiento;
    this->fechaIngreso = fechaIngreso;
    this->numeroHijos = numeroHijos;
}

//**********************Getters
string Empleado::getNombre() {
    return this->nombre;
}

string Empleado::getApellido() {
    return this->apellido;
}

char Empleado::getSexo() {
    return sexo;
}

bool Empleado::getEstadoCivil(){
    return estadoCivil;
}

int Empleado::getSalario() {
    return salario;
}

int Empleado::getNumeroHijos() {
    return this->numeroHijos;
}

//************************Metodos
void Empleado::cambiarSalario(int nuevoSalario){
    salario = nuevoSalario;
}

string Empleado::comprobarEstadoCivil(bool n) {
    if (n == 1) //Esta funcion ayuda al get Estado civil, a obtener sus valores casado o soltero
    {
        return "Casado";
    } else return "soltero"; // Esto sirve para comprobar si esta casado; recibe boleano 1 o 0
}

int Empleado::calcularAuxilioConyugal(bool m){
    if(m != false){
        int auxilioConyugal = sqrt(salario*0.75);
        return auxilioConyugal;
    }
}

int Empleado::calcularEdad() {
    Fecha hoy(23, 9, 2021);
    int edad = fechaNacimiento.calcularDiferencia(hoy);
    return edad;
}

int Empleado::calcularPrestaciones() {
    int antiguedad = calcularAntiguedad();
    int antiguedadMeses = antiguedad*12;
    int prestaciones = antiguedadMeses* getSalario() * 0.5;
    return prestaciones;
}

int Empleado::calcularAntiguedad() {
    Fecha hoy(23, 9, 2021);
    int antiguedad = this->fechaIngreso.calcularDiferencia(hoy);
    return antiguedad;
}

double Empleado::auxilioEducativo() {
    double auxilio = (getSalario() * 0.05) * getNumeroHijos();
    return auxilio;
}

int Empleado::calcularDiferenciaSalarial(Empleado otroEmpleado){
    int salario = otroEmpleado.getSalario();
    if(salario > getSalario()){
        return salario - getSalario();
    } else {
        return getSalario() - salario;
    }
}
