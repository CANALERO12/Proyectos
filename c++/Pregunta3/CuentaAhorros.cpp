#include "CuentaAhorros.h"

CuentaAhorros::CuentaAhorros(){
    //Constructor
}

CuentaAhorros::~CuentaAhorros(){
    //Destructor
}

int CuentaAhorros::darSaldo(){
    return saldo;
}

void CuentaAhorros::consignarSaldo(int valor){
    saldo += valor;
}

void CuentaAhorros::retirarSaldo(int valor){
    valor = saldo - valor;
    if (valor < 0)
    {
         std::cout<<std::endl << "no puedes retirar mas de tu saldo actual";
    }  
}

double CuentaAhorros::darInteresMensual(){
    return darSaldo()*0.006;
}

void CuentaAhorros::actualizarSaldoPorMes(){
    saldo = saldo - darInteresMensual();
}
