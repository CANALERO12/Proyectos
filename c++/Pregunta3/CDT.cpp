#include "CDT.h"

CDT::CDT(){
    //Constructor
}

CDT::~CDT(){
    //Destructor
}

void CDT::invertir(int valorInvertido, double interesMensual, int numeroMes){
    this->valorInvertido = valorInvertido;
    this->interesMensual = interesMensual;
    this->numeroMes = numeroMes;
}

int CDT::valorActual(Mes mesActual){
}
