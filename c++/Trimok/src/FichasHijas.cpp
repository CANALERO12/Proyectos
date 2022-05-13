#include "FichasHijas.h"

//________________________________________Tijeras___________________________________
CTijeras::CTijeras():Ficha()
{icono ='T';}

CTijeras::CTijeras(int y, int x, char c): Ficha(y, x, c)
{icono ='T';}

CTijeras::~CTijeras() {
    cout << endl << "Tijera" << ' ' << (color=='B'?"blanco":"negro") << ' ' << "eliminado.";
    cout << endl << "Oprima 0 para terminar la partida.";
}

bool CTijeras::hacerMovimiento(int y, int x, Ficha* casilla) {
    cout << endl;

    if((posicionY==y) and (posicionX==x)){
        cout << "Movimiento NO VALIDO: La posicion de destino no puede ser igual a la posicion de la pieza." << endl;
        return false;
    }

    if(abs(posicionX-x)>1 || abs(posicionY-y)>1){
            cout << posicionX << posicionY << endl;
            if(color== 'B'){
                    if (posicionY != 5){ // este not funciona para cualquier caso excepto el mov especial
                        cout << "Movimiento NO VALIDO: la ficha no puede avanzar a esa posicion." << endl;
                        return false;
                }
            }
            if(color== 'N'){
                    if (posicionY != 0){ // este not funciona para cualquier caso excepto el mov especial
                        cout << "Movimiento NO VALIDO: la ficha no puede avanzar a esa posicion." << endl;
                        return false;
                }
            }
    }
    if(casilla!=nullptr){
        if(casilla->getColor()==color){
            cout << "Movimiento NO VALIDO: Una pieza del mismo COLOR ocupa la posicion." << endl;
            return false;
        }
        cout<<"pasando validacion icono"<<endl;
        if(casilla->getIcono()== icono)
        {
            cout<<"Movimiento NO VALIDO: mismo tipo de ficha"<<endl;
            return false;
        }
        cout <<"Terminando validacion icono"<<endl;
        if(casilla->getIcono()== 'P')
        {
            cout<<"Movimiento NO VALIDO: la TIJERA no puede comer PIEDRA";
            return false;
        }
    }

    cout << "Movimiento VALIDO." << endl;
    return true;
}

//_____________________________________________Papel______________________________________________
CPapel::CPapel():Ficha()
{icono = 'P';}

CPapel::CPapel(int y, int x, char c): Ficha(y, x, c)
{icono='P';}

CPapel::~CPapel() {
    cout << endl << "Papel" << ' ' << (color=='B'?"blanco":"negro") << ' ' << "eliminado.";
    cout << endl << "Oprima 0 para terminar la partida.";
}

bool CPapel::hacerMovimiento(int y, int x, Ficha* casilla) {
    cout << endl;
    if((posicionY==y) and (posicionX==x)){
        cout << "Movimiento NO VALIDO: La posicion de destino no puede ser igual a la posicion de la pieza." << endl;
        return false;
    }
    if(abs(posicionX-x)>1 || abs(posicionY-y)>1){
            if(color== 'B'){
                    if (posicionY != 5){ // este not funciona para cualquier caso excepto el mov especial
                        cout << "Movimiento NO VALIDO: la ficha no puede avanzar a esa posicion." << endl;
                        return false;
                }
            }
            if(color== 'N'){
                    if (posicionY != 0){ // este not funciona para cualquier caso excepto el mov especial
                        cout << "Movimiento NO VALIDO: la ficha no puede avanzar a esa posicion." << endl;
                        return false;
                }
            }
    }

    if(casilla!=nullptr){
        if(casilla->getColor()==color){
            cout << "Movimiento NO VALIDO: Una pieza del mismo color ocupa la posicion." << endl;
            return false;
        }
        if(casilla->getIcono()== icono)
        {
            cout<<"Moviemiento NO VALIDO: mismo tipo de ficha"<<endl;
            return false;
        }
        if(casilla->getIcono()== 'T')
        {
            cout<<"Movimiento NO VALIDO: el PAPEL no puede comer TIJERA";
            return false;
        }
    }
    cout << "Movimiento VALIDO." << endl;
    return true;
}
//_____________________________________________Piedra______________________________________________
CPiedra::CPiedra():Ficha()
{icono = 'K';}

CPiedra::CPiedra(int y, int x, char c): Ficha(y, x, c)
{icono='K';}

CPiedra::~CPiedra() {
    cout << endl << "Papel" << ' ' << (color=='B'?"blanco":"negro") << ' ' << "eliminado.";
    cout << endl << "Oprima 0 para terminar la partida.";
}

bool CPiedra::hacerMovimiento(int y, int x, Ficha* casilla) {
    cout << endl;
    if((posicionY==y) and (posicionX==x)){
        cout << "Movimiento NO VALIDO: La posicion de destino no puede ser igual a la posicion de la pieza." << endl;
        return false;
    }
    if(abs(posicionX-x)>1 || abs(posicionY-y)>1){
            if(color== 'B'){
                    if (posicionY != 5){ // este not funciona para cualquier caso excepto el mov especial
                        cout << "Movimiento NO VALIDO: la ficha no puede avanzar a esa posicion." << endl;
                        return false;
                }
            }
            if(color== 'N'){
                    if (posicionY != 0){ // este not funciona para cualquier caso excepto el mov especial
                        cout << "Movimiento NO VALIDO: la ficha no puede avanzar a esa posicion." << endl;
                        return false;
        }
    }
}
    if(casilla!=nullptr){
        if(casilla->getColor()==color){
            cout << "Movimiento NO VALIDO: Una pieza del mismo color ocupa la posicion." << endl;
            return false;
        }
        if(casilla->getIcono()== icono)
        {
            cout<<"Moviemiento NO VALIDO: mismo tipo de ficha"<<endl;
            return false;
        }
        if(casilla->getIcono()== 'p')
        {
            cout<<"Movimiento NO VALIDO: la PIEDRA no puede comer PAPEL";
            return false;
        }
    }
    cout << "Movimiento VALIDO." << endl;
    return true;
}
