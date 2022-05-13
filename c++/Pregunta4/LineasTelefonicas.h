/*
Nombre de archivo: LineasTelefonicas.h
Version: 2.0
Fecha de creacion: 21/10/2021
Fecha de ultima modificacion: 27/10/2021
Autor: Santiago Marin Lozano
       Juan esteban Londono Gonzalez
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
Clase: LineasTelefonias
Responsabilidad : Este toma y guarda los valores predeterminados
de las lineas telefonicas.
Colaboracion:
*/

#ifndef LINEASTELEFONICAS_H
#define LINEASTELEFONICAS_H
#include <string>

using namespace std;

class LineasTelefonicas{

    //Atributos de llamada
    private:
    int numeroDeLlamadas;
    int duracionLlamada;
    int costoLlamada;

    // Metodos de llamada
    public:
        LineasTelefonicas();
        ~LineasTelefonicas();
        int darNumeroLlamadas();
        int darDuracionDeLlamada();
        int darCostoLlamada();
        int llamadaLargaDistancia(int minutos);
        int llamadasLocales(int minutos);
        int llamadaCelulares(int minutos);
};
#endif

