#include "Contacto.h"

Contacto::Contacto()
{
    
}

Contacto::~Contacto()
{
    
}

Contacto::Contacto(string nombre, string apellido, string direccion, string correoElectronico){
    this->nombre = nombre;
    this->apellido = apellido;
    this->direccion = direccion;
    this->correElectronico = correoElectronico;
}

string Contacto::darNombre(){
    return this->nombre;
}

string Contacto::darApellido(){
    return this->apellido;
}

string Contacto::darDireccion(){
    return this->direccion;
}

string Contacto::darCorreoelectronico(){
    return this->correElectronico;
}

int Contacto::darCantidadTelefonos() {
    return this->telefonos.size();
}

int Contacto::darCantidadPalabrasClaves() {
    return this->palabrasClave.size();
}

void Contacto::modificarNombre(string nombre){
   this->nombre = nombre;
}

void Contacto::modificarApellido(string apellido){
    this->apellido = apellido;
}

void Contacto::modificarDireccion(string direccion){
    this->direccion = direccion;
}

void Contacto::modificarCorreoElectronico(string email){
    this->correElectronico = email;
}

void Contacto::modificarTelefono(int indice, string nuevo) {
    this->telefonos[indice] = nuevo;
}

void Contacto::modificarPalabraClave(int indice, string nuevo) {
    this->palabrasClave[indice] = nuevo;
}

void Contacto::agregarTelefono(string numero){
    this->telefonos.push_back(numero);
}

void Contacto::agregarPalabraClave(string palabra){
    palabrasClave.push_back(palabra);
}

void Contacto::mostrarTelefonos() {
    for(int i=0; i<telefonos.size(); i++) {
        cout << "\t\tTELEFONO #" << (i+1) << endl;
        cout << "\t" << telefonos[i] << endl;
    }
}

void Contacto::mostrarPalabrasClaves() {
    for(int i=0; i<palabrasClave.size(); i++) {
        cout << "\t\tPALABRA CLAVE #" << (i+1) << endl;
        cout << "\t" << palabrasClave[i] << endl;
    }
}

int Contacto::estaUnTelefono(string numero) {
    for(int i=0; i<telefonos.size(); i++) {
        if(numero == telefonos[i]) {
            return i;
        }
    }
    return -1;
}

int Contacto::estaEsUnaPalabraClave(string palabra) {
    for(int i=0; i<palabrasClave.size(); i++) {
        if(palabra == palabrasClave[i]) {
            return i;
        }
    }
    return -1;
}

void Contacto::eliminarTelefono(string numero) {
    int indice = estaUnTelefono(numero);
    if(indice == -1) {
        cout << "\nPor digite un numero existente \n";
    }else {
        telefonos.erase(telefonos.begin()+indice);
        cout << "\nSe ha eliminado correctamente \n";
    }
}

void Contacto::eliminarPalabraClave(string palabra) {
    int indice = estaEsUnaPalabraClave(palabra);
    if(indice == -1) {
        cout << "\nPor digite una palabra clave existente \n";
    }else {
        palabrasClave.erase(palabrasClave.begin()+indice);
        cout << "\nSe ha eliminado correctamente \n";
    }
}

void Contacto::mostrarInformacion(bool completa) {
    cout << "Nombre: " << this->nombre << endl;
    cout << "Apellido: " << this->apellido << endl;
    cout << "Direccion: " << this->direccion << endl;
    cout << "Correo electronico: " << this->correElectronico << endl;    
    if(completa) {
        mostrarTelefonos();
        mostrarPalabrasClaves();
    }
}