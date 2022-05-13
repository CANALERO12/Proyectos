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
#include "CuentaCorriente.h"
#include <iostream>

CuentaCorriente::CuentaCorriente(){

    //Constructor

}

CuentaCorriente::~CuentaCorriente(){

    //Destructor
}

int CuentaCorriente::darSaldo(){
    return saldo;
}

void CuentaCorriente::retirarSaldo(int saldoRetirar){
  saldoRetirar = saldo - saldoRetirar;
  if (saldoRetirar < 0)
  {
      std::cout<<std::endl << "no puedes retirar mas de tu saldo actual";
  }
}

void CuentaCorriente::actualizarSaldoPorMes(){

}

void CuentaCorriente::consignarSaldo(int valor){
    saldo+= valor;
}
