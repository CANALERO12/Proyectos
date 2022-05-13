#include "Cliente.h"

Cliente::Cliente(){
    this->nombre = "";
    this->cedula = "";
}

Cliente::Cliente(string nombre, string cedula, CuentaCorriente cuentaCorriente, CuentaAhorros cuentaAhorros, CDT cdt, Mes mes){
    this->nombre = nombre;
    this->cedula = cedula;
    this->cuentaCorriente = cuentaCorriente;
    this->cuentaAhorros = cuentaAhorros;
    this->cdt = cdt;
    this->mes = mes;
}


Cliente::~Cliente(){}


void Cliente::setNombre(string nombre){
    this->nombre = nombre;
}

void Cliente::setCedula(string cedula){
    this->cedula = cedula;
}

string Cliente::getNombre(){
    return this->nombre;
}

string Cliente::getCedula(){
    return this->cedula;
}
void CuentaCorriente::consignarSaldo(int valor){
   consignarSaldo(valor);
}

void CuentaAhorros::consignarSaldo(int valor){
   consignarSaldo(valor);
}

