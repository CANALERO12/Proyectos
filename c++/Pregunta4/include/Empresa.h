/*
Nombre de archivo: Empresa.H
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
/*CRC
Clase: Empresa
Responsabilidad : se encarga de recibir un nombre para una empresa
y trabajar los valores de una linea telefonica
Colaboracion: LineasTelefonicas
*/
#ifndef EMPRESA_H
#define EMPRESA_H

#include <iostream>
#include "LineasTelefonicas.h"

using namespace std;

class Empresa{

    private:
        string nombre;
        LineasTelefonicas lineasTelefonicas[3];

    public:
        Empresa();
        Empresa(string nombre);
        ~Empresa();
        void mostrarLineaTelefonica();
        void mostrarTotal();
        void registrarLlamadas();

};
#endif //Empresa_H


