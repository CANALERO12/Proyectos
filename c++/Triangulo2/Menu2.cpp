#include <iostream>
#include "Menu2.h"

using namespace std;

Menu::Menu(){
    opcion = 0;
    Punto punto1(5, 4);
    Punto punto2(-3, 2);
    Punto punto3(-3, 6);

    punto1Triangulo = punto1;
    punto2Triangulo = punto2;
    punto3Triangulo = punto3;

    Triangulo miTriangulo(punto1, punto2, punto3);
    TrianguloPrueba = miTriangulo;

    Perimetro = 0, Area = 0, Altura = 0;
}

Menu::~Menu(){
    //Destructor
}

void Menu::seleccionarOpcion(){
    cout << endl;
    cout << "1. - CALCULAR PERIMETRO DEL TRIANGULO" << endl;
    cout << "2. - CALCULAR AREA DEL TRIANGULO" << endl;
    cout << "3. - CALCULAR ALTURA DEL TRIANGULO" << endl;
    cout << "4. - SALIR" << endl;
    do {
        cout << "Introduzca una opcion: ";
        cin >> opcion;
    }while(!((opcion>=1) && (opcion<=4)));
}

void Menu::mostrarPuntosDelPlano(){
    cout<<endl;
    cout << "Punto # 1: " <<"(" << punto1Triangulo.darX()<< ", "<< punto1Triangulo.darY() << ")"<< endl;
    cout << "Punto # 2: " <<"(" << punto2Triangulo.darX()<< ", "<< punto2Triangulo.darY() << ")"<< endl;
    cout << "Punto # 3: " <<"(" << punto3Triangulo.darX()<< ", "<< punto3Triangulo.darY() << ")"<< endl;
}

void Menu::mostrarDatosTriangulo(){
    if(Perimetro > 0){
        cout<<"Perimetro = "<< Perimetro << " cm" << endl;
        }
    if(Area > 0){
    cout<<"Area = "<< Area << " cm" << endl;
    }
    if(Altura > 0){
    cout<<"Altura= "<< Altura << " cm" << endl;
    }
}

void Menu::visualizar(){
    do{
        mostrarPuntosDelPlano();
        mostrarDatosTriangulo();
        seleccionarOpcion();
        switch(opcion) {
            case 1:
                Perimetro = TrianguloPrueba.calcularPerimetro();
                break;

            case 2:
                Area = TrianguloPrueba.calcularArea();
                break;

            case 3:
                Altura = TrianguloPrueba.calcularAltura();
                break;
        }
        system("cls");
    }while(opcion != 4);
}