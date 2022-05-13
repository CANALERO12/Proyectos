/*
Nombre de archivo: Menu.cpp
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

#include "../Menu.h"

Menu::Menu(){
    Empresa tmp("IPOO");
    this->miEmpresa = tmp;
}

Menu::~Menu(){
}

void Menu::visualizar() {
    salir = false;
    do {
        cout << endl << "1. Registrar llamada " << endl;
        cout << "2. Mostrar informacion de las linea" << endl;
        cout << "3. Mostrar consolidado total" << endl;
        cout << "4. Salir " << endl;

        cout << "Digite la opcion: ";
        cin >> this->opcion;

        validaciones();
    }while(!salir);
}

void Menu::validaciones() {
    switch (this->opcion) {
        case 1: {
            cout << endl <<"Registro exitoso" << endl;
            this->miEmpresa.registrarLlamadas();
            break;
        }
        case 2: {
            this->miEmpresa.mostrarLineaTelefonica();
            break;
        }
        case 3: {
            this->miEmpresa.mostrarTotal();
            break;
        }
        case 4: {
            this->salir = true;
            break;
        }
        default: {
            cout << "La opcion es incorrecta " << endl;
            break;
        }
    }
}
