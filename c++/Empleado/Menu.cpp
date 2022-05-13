#include "Menu.h"

Menu::Menu()
{
    opcion = 0;
    Fecha fecha1(24, 5, 2000); //fecha de nacimiento
    Fecha fecha2(15, 10, 2010); //fecha de ingreso
    fechaNacimiento = fecha1;
    fechaIngreso = fecha2;
    Empleado empleado("Pepito", "Perez", 'M', true, 3000000, fechaNacimiento, fechaIngreso, 3);
    empleado1= empleado;
    edad = 0, prestaciones = 0, antiguedad = 0, auxilioConyugal = 0;
}

Menu::~Menu()
{
    //dtor
}

void Menu::seleccionarOpcion() {
    cout << endl;
    cout << "1. - Modificar salario" << endl;
    cout << "2. - Calcular edad" << endl;
    cout << "3. - Calcular antiguedad" << endl;
    cout << "4. - Calcular prestaciones" << endl;
    cout << "5  - Auxilio Conyugal" << endl;
    cout << "6. - Salir" << endl;
    do {
        cout << "Introduzca una opcion: ";
        cin >> opcion;
    }while(!((opcion>=1) && (opcion<=6)));
}

void Menu::mostrarDatosPersonales() {
    cout << "Nombre: " << empleado1.getNombre() << endl;
    cout << "Apellido: " << empleado1.getApellido() << endl;
    cout << "Sexo: " << empleado1.getSexo() << endl;
    cout << "Estado civil: " << empleado1.comprobarEstadoCivil(empleado1.getEstadoCivil()) << endl;
    cout << "Fecha nacimiento: " << fechaNacimiento.darDia() << "/" << fechaNacimiento.darMes() << "/" << fechaNacimiento.darAnio() << endl;
    cout << "Fecha ingreso: " << fechaIngreso.darDia() << "/" << fechaIngreso.darMes() << "/" << fechaIngreso.darAnio() << endl;
    cout << "Salario: " << empleado1.getSalario() << endl;
    cout << endl;
}

void Menu::mostrarCalculos() {
    if(edad > 0)
        cout << "Edad = " << edad << endl;
    if(antiguedad > 0)
        cout << "Antiguedad = " << antiguedad << endl;
    if(prestaciones > 0)
        cout << "Prestaciones = " << prestaciones << endl;
    if(auxilioConyugal != false)
    cout << "Auxilio conyugal = " << auxilioConyugal << endl; 
}

void Menu::visualizar(){
    int nuevoSalario = 0;
    do{
        mostrarDatosPersonales();
        mostrarCalculos();
        seleccionarOpcion();
        switch(opcion) {
            case 1:
                cout<< "Introduza el nuevo salario" << endl;
                cin >> nuevoSalario;
                empleado1.cambiarSalario(nuevoSalario);
                //prestaciones = empleado1.calcularPrestaciones();
                break;

            case 2:
                edad = empleado1.calcularEdad();
                break;

            case 3:
                antiguedad = empleado1.calcularAntiguedad();
                break;

            case 4:
                prestaciones= empleado1.calcularPrestaciones();
                break;
            case 5:
                auxilioConyugal = empleado1.calcularAuxilioConyugal(empleado1.getEstadoCivil());
        }
        system("cls");
    }while(opcion != 6);
    //El codigo termina aca
}
