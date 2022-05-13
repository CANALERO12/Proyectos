/*
Nombre de archivo: Fecha.g
Version: 0.1
Fecha de creacion: 16/09/2021
Fecha de ultima modificacion: 16/09/2021
Autor: Miguel Askar
Correo: miguel.askar@correounivalle.edu.co
*/

/* CRC
Clase: Fecha
Responsabilidad:
-Almacenar una fecha con dia, mes y anio
-Calcular una diferencia entre dos fechas
Colaboracion: Ninguna
*/

#ifndef FECHA_H
#define FECHA_H


class Fecha
{
    public:
        Fecha();
        Fecha(int dia, int mes, int anio);
        virtual ~Fecha();
        int darDia();
        int darMes();
        int darAnio();
        int calcularDiferencia(Fecha otraFecha);

    private:
        int dia;
        int mes;
        int anio;
};

#endif // FECHA_H
