/*
Nombre de archivo: Empresa.cpp
Version: 2.0
Fecha de creacion: 21/10/2021
Fecha de ultima modificacion: 27/10/2021
Autor: Santiago Marin Lozano
       Juan esteban Londo�o Gonzalez
       Daniel Felipe Gonzalez
       Andres Mauricio Arias Cortes
       Maher Lopez Rodriguez
Correos:
andres.mauricio.arias@correounivalle.edu.co
daniel.gonzalez.melendez@correounivalle.edu.co
juan.esteban.londono@correounivalle.edu.co
maher.lopez@correounivalle.edu.co
santiago.marin.lozano@correounivalle.edu.co

*/

#include "../Empresa.h"


Empresa::Empresa(){ // constructor
}

Empresa::Empresa(string nombre) {
    this->nombre = nombre;
}

Empresa::~Empresa(){ // Destructor
}

void Empresa::mostrarLineaTelefonica() {
    for(int i=0; i<3; i++) {
        cout << "----------- LINEA #" << (i+1) << " ----------------" << endl;
        cout << "Numero de llamadas: " << lineasTelefonicas[i].darNumeroLlamadas() << endl;
        cout << "Total de minutos: " << lineasTelefonicas[i].darDuracionDeLlamada() << endl;
        cout << "Costo Total de llamadas: " << lineasTelefonicas[i].darCostoLlamada() << endl;
        cout << "-------------------------------------" << endl;
    }
}

void Empresa::mostrarTotal() {
    int costoTotal = 0, llamadas = 0, minutos = 0;
    float promedio = 0;
    for(int i=0; i<3; i++) {
       costoTotal += lineasTelefonicas[i].darCostoLlamada();
       llamadas += lineasTelefonicas[i].darNumeroLlamadas();
       minutos += lineasTelefonicas[i].darDuracionDeLlamada();
    }

    promedio = costoTotal / minutos;
    cout << endl << "Total de minutos de las 3 linea: " << minutos << endl;
    cout << "Numero de llamadas: " << llamadas << endl;
    cout << "Costo Total de llamadas: " << costoTotal << endl;
    cout << "Promedio total: " << promedio << endl;
}

void Empresa::registrarLlamadas() {
    this->lineasTelefonicas[0].llamadaCelulares(5);
    this->lineasTelefonicas[0].llamadaLargaDistancia(4);
    this->lineasTelefonicas[1].llamadaLargaDistancia(15);
    this->lineasTelefonicas[2].llamadasLocales(20);
}


