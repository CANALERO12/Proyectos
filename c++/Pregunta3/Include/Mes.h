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
#ifndef MES_H
#define MES_H


class Mes{

    private:
        int mes;

    public:
        Mes();
        ~Mes();
        Mes (int mes);
        int darMes();
        int calcularDiferenciaMeses (Mes desdeFecha);
        void avanzarMes();


};

#endif