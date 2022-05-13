#include "MENU.h"


using namespace std;

Menu::Menu(){

}

Menu::~Menu(){
}

void Menu::visualizar() {
    bool salir = false;
    int opcion;    

    do {
        cout << "\n1. Crear contacto \n";        
        cout << "2. Eliminar un contacto \n";
        cout << "3. Mostrar informacion detallada de un contacto \n";
        cout << "4. Modificar un contacto \n";
        cout << "5. Mostrar lista completa de contactos \n";
        cout << "6. Buscar contactos por palabras claves \n";
        cout << "7. Salir \n\n";

        cout << "Digite una opcion: "; cin >> opcion;

        switch(opcion) {
            case 1: {                
                this->miLibreta.agregarContacto(solicitarDatos());
                break;
            }           
            case 2: {
                solicitarParaEliminar();
                break;
            }
            case 3: {
                string nombre, apellido;
                cout << "\nDigite el nombre del contacto: ";
                cin >> nombre;
                cout << "\nDigite el apellido del contacto: ";
                cin >> apellido;
                Contacto auxiliar = miLibreta.retornarContacto(nombre, apellido);
                if(auxiliar.darNombre() != "") {
                    auxiliar.mostrarInformacion(true);
                }
                break;
            }
            case 4: {                
                solicitarParaModificar();
                break;
            }
            case 5: {
                miLibreta.mostrarTodos();
                break;
            }
            case 6: {
                string clave;
                cout << "\nDigite la palabra clave: ";
                cin >> clave;
                miLibreta.busquedaPorPalabrasClave(clave);
                break;
            }
            case 7: {
                salir = true;
                break;
            }
            default: {
                cout << "\nOpcion incorrecta \n";
                break;
            }
        }
    }while(!salir);
}

Contacto Menu::solicitarDatos() {
    string nombre, apellido, direccion, correo, telefonos, clave;
    int cantidadTelefono = -1, cantidadPalabrasClaves = -1;
    cout << "\nDigite el nombre del contacto: "; cin >> nombre;
    cout << "\nDigite el apellido del contacto: "; cin >> apellido;
    cout << "\nDigite el direccion del contacto: "; cin >> direccion;
    cout << "\nDigite el correo del contacto: "; cin >> correo;

    Contacto contactoNuevo(nombre, apellido, direccion, correo);

    while(cantidadTelefono < 0) {
        cout << "Digite la cantidad de numeros telefonicos a registrar: ";
        cin >> cantidadTelefono;
    }
    for(int i=0; i<cantidadTelefono; i++){
        cout << "Digite el Telefono #" << (i+1) << ": ";
        cin >> telefonos;
        contactoNuevo.agregarTelefono(telefonos);
    }

    while(cantidadPalabrasClaves < 0) {
        cout << "Digite la cantidad de Palabras claves a registrar: ";
        cin >> cantidadPalabrasClaves;
    }
    for(int i=0; i<cantidadPalabrasClaves; i++){
        cout << "Digite la Palabra clave #" << (i+1) << ": ";
        cin >> clave;
        contactoNuevo.agregarPalabraClave(clave);
    }

    return contactoNuevo;
}

void Menu::solicitarParaEliminar() {
    string nombre, apellido;
    cout << "\nDigite el nombre del contacto: ";
    cin >> nombre;
    cout << "\nDigite el apellido del contacto: ";
    cin >> apellido;

    miLibreta.eliminarContacto(nombre, apellido);
}

void Menu::solicitarParaModificar() {
    string nombre, apellido;
    cout << "\nDigite el nombre del contacto: ";
    cin >> nombre;
    cout << "\nDigite el apellido del contacto: ";
    cin >> apellido;
    
    int indice = miLibreta.estaUnContacto(nombre, apellido);
    if(indice == -1) {
        cout << "\nEl contacto no existe\n";    
    }else subMenuModificar(indice);
}

void Menu::subMenuModificar(int indice) {
    bool salir = false;
    do {
        cout << "\n\nCampos que puedes modicar \n";
        cout << "1. Nombre \n";
        cout << "2. Apellido \n";
        cout << "3. Direccion \n";
        cout << "4. Correo Electronico \n";
        cout << "5. Modificar telefonos \n";
        cout << "6. Modificar palabras claves \n";
        cout << "7. Salir \n\n";

        cout << "Digite la opcion: ";
        cin >> this->opcion;
        
        string dato = "";
        switch(this->opcion) {
            case 1: {
                cout << "\nDigite el nuevo nombre: ";
                cin >> dato;
                miLibreta.listaCompletaDeContactos()[indice].modificarNombre(dato);
                break;
            }
            case 2: {
                cout << "\nDigite el nuevo apellido: ";
                cin >> dato;
                miLibreta.listaCompletaDeContactos()[indice].modificarApellido(dato);
                break;
            }
            case 3: {
                cout << "\nDigite el nuevo direccion: ";
                cin >> dato;
                miLibreta.listaCompletaDeContactos()[indice].modificarDireccion(dato);
                break;
            }
            case 4: {
                cout << "\nDigite el nuevo correo: ";
                cin >> dato;
                miLibreta.listaCompletaDeContactos()[indice].modificarCorreoElectronico(dato);
                break;
            }
            case 5: {
                miLibreta.listaCompletaDeContactos()[indice].mostrarTelefonos();
                cout << "\nPor digite la posicion asociada al telefono: ";
                int posicion;
                cin >> posicion;

                if(posicion <= 0 ||
                    posicion > miLibreta.listaCompletaDeContactos()[indice].darCantidadTelefonos()){
                    cout << "\nEl telefono que quiere acceder no existe \n\n";
                }else {
                    cout << "Por digite el nuevo telefono: ";
                    cin >> dato;
                    miLibreta.listaCompletaDeContactos()[indice].modificarTelefono(posicion-1, dato);
                }
                break;
            }
            case 6: {
                miLibreta.listaCompletaDeContactos()[indice].mostrarPalabrasClaves();
                cout << "\nPor digite la posicion asociada a la palabra clave: ";
                int posicion;
                cin >> posicion;

                if(posicion <= 0 ||
                    posicion > miLibreta.listaCompletaDeContactos()[indice].darCantidadPalabrasClaves()){
                    cout << "\nLa palabra clav que quiere acceder no existe \n\n";
                }else {
                    cout << "Por digite la nuevo palabra clave: ";
                    cin >> dato;
                    miLibreta.listaCompletaDeContactos()[indice].modificarPalabraClave(posicion-1, dato);
                }
                break;
            }
            case 7: {
                salir = true;
                break;
            }
            default: {
                cout << "\nOpcion incorrecta \n";
                break;
            }
        }
        
    }while(!salir);
}