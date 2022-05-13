#include "Libreta.h"

Libreta::Libreta()
{
    //ctor
}

Libreta::~Libreta()
{
    //dtor
}

void Libreta::agregarContacto(Contacto nuevoContacto){
    this->agenda.push_back(nuevoContacto);
}

void Libreta::eliminarContacto(string nombre, string apellido){
    int indice = estaUnContacto(nombre, apellido);
    if(indice == -1) {
        cout << "\nContacto inexistente \n";    
    }else {
        cout << "\n\t\tSe ha elimando el siguiente contacto: \n";        
        agenda[indice].mostrarInformacion(false);
        agenda.erase(agenda.begin()+indice);
    }

}

int Libreta::estaUnContacto(string nombre, string apellido){
    for(int i=0; i<agenda.size(); i++) {
        if(agenda[i].darNombre() == nombre &&
            agenda[i].darApellido() == apellido){

                return i;            
        }
    }
    return -1;
}

Contacto Libreta::retornarContacto(string nombre, string apellido){
    int indice = estaUnContacto(nombre, apellido);
    if(indice == -1) {
        cout << "\nContacto inexistente \n";
        return Contacto();
    }else {
        return agenda[indice];
    }
}

void Libreta::modificarInfoContacto(Contacto contacto, int parametro, string info){

}

void Libreta::escribirListaDeContactos(){
}

vector<Contacto>& Libreta::listaCompletaDeContactos(){
    return this->agenda;
}

void Libreta::mostrarTodos() {
    cout << "\n\n";
    if(agenda.empty()) {
        cout << "\b\bNO HAY CONTACTOS EXISTENTES";
    }else {
        for(int i=0; i<agenda.size(); i++) {
            cout << "CONTACTO #" << (i+1) << endl;
            agenda[i].mostrarInformacion(true);    
        }
    }
    cout << "\n\n";
}

void Libreta::busquedaPorPalabrasClave(string palabra) {
    int contador = 1;
    for(int i=0; i<agenda.size(); i++) {
        int indice = agenda.at(i).estaEsUnaPalabraClave(palabra);
        if(indice != -1) {            
            cout << "\nContacto #" << contador << "\n"; 
            agenda.at(i).mostrarInformacion(true);
            contador++;
        }
    }
}