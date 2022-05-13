/*
Nombre de archivo: MENU.H
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
Clase: Menu
Responsabilidad : Menu se encarga de mostrar los datos de sus respectivas
clases asociadas
Colaboracion: LineasTelefonicas y Empresa
*/




#ifndef MENU_H
#define MENU_H

#include <iostream>
#include "LineasTelefonicas.h"
#include "Empresa.h"

using namespace std;


class Menu
{
    private:
        int opcion;
        bool salir;
        Empresa miEmpresa;

    public:
        Menu();
        virtual ~Menu();
        void visualizar();
        void validaciones();

};

#endif // MENU_H
