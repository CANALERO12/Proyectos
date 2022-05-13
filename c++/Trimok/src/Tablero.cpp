#include "Tablero.h"
#include "Partida.h"


Tablero::Tablero() : tamanoX{X}, tamanoY{Y}, numeroFichas{24}
{
    // creamos un arreglo al cual podamos agregarle punteros de la clase Ficha
    //el constructor Ficha permitira crear diferentes fichas como si fueran de la misma clase
    listaPiezas=new Ficha*[numeroFichas];
    fichasEliminadas=new Ficha*[0];


    //insertar Tijeras
    listaPiezas[0]= new CTijeras(0,0,'B');
    listaPiezas[1]= new CTijeras(1,0,'B');
    listaPiezas[2]= new CTijeras(5,0,'N');
    listaPiezas[3]= new CTijeras(4,0,'N');
    listaPiezas[4]= new CTijeras(0,3,'N');
    listaPiezas[5]= new CTijeras(1,3,'B');
    listaPiezas[6]= new CTijeras(4,3,'N');
    listaPiezas[7]= new CTijeras(5,3,'N');

    //insertar  Papeles
    listaPiezas[8]= new CPapel(0,1,'B');
    listaPiezas[9]= new CPapel(1,1,'B');
    listaPiezas[10]= new CPapel(5,1,'N');
    listaPiezas[11]= new CPapel(4,1,'N');
    listaPiezas[12]= new CPapel(0,4,'B');
    listaPiezas[13]= new CPapel(1,4,'B');
    listaPiezas[14]= new CPapel(5,4,'N');
    listaPiezas[15]= new CPapel(4,4,'N');

    //insertar Piedra
    listaPiezas[16]= new CPiedra(0,2,'B');
    listaPiezas[17]= new CPiedra(1,2,'B');
    listaPiezas[18]= new CPiedra(5,2,'N');
    listaPiezas[19]= new CPiedra(4,2,'N');
    listaPiezas[20]= new CPiedra(0,5,'B');
    listaPiezas[21]= new CPiedra(1,5,'B');
    listaPiezas[22]= new CPiedra(5,5,'N');
    listaPiezas[23]= new CPiedra(4,5,'N');

}

//destructor

Tablero::~Tablero() {
    for(int i=0; i<numeroFichas; i++) {
        delete listaPiezas[i];
        listaPiezas[i] = nullptr;
    }
    delete[] listaPiezas;
}


void Tablero::imprimirTabla() {
    // Crear matriz de strings y llenarlos con strings vacios
    string tabla[tamanoY][tamanoX];
    for(int i=0; i<tamanoY; i++) {
        for(int j=0; j<tamanoX; j++)
        {tabla[i][j] = " ";}
    }

    // Insertar los iconos de las piezas en la matriz
    for(int i=0; i<numeroFichas; i++) {
        tabla[listaPiezas[i]->getPosY()][listaPiezas[i]->getPosX()] = listaPiezas[i]->getIconColor();
    }

    // Imprimir la matriz
    // - Linea separadora más linea de casillas
    for(int i=int(tamanoY)-1; i>=0; i--){
        // Parte separadora
        cout << endl << string(2,' ');
        for(int j=0; j<tamanoX; j++){
            cout << setfill('-') << setw(5) << left << '-';
        }
        cout << '+' << endl;

        // Parte de las casillas
        cout << setfill(' ') << setw(2) << left << i+1;
        for(int j=0; j<tamanoX; j++){
            cout << setfill(' ') << setw(2) << left << '|';
            cout << setfill(' ') << setw(3) << left << tabla[i][j];
        }
        cout << '|';
    }

    // - Ultima linea separadora.
    cout << endl << string(2,' ');
    for(int i=0; i<tamanoX; i++){
        cout << setfill('-') << setw(5) << left << '+';
    }
    cout << '+';
    //  - Linea de letras
    cout <<  endl;
    cout << string(2,' ');
    for(int i=0; i<tamanoX; i++){
        cout << setfill(' ') << setw(5) << left << char('A'+i);
    }
    cout << ' ' << endl;
}

bool Tablero::posicionValida (string pos) const {
    if(pos.size()!=2) {return false;}
    if(not(pos[1]>='1' and pos[1]<'1'+tamanoY)) {return false;}
    if(not(pos[0]>='A' and pos[0]<'A'+tamanoX)) {return false;}
    return true;
}


Ficha* Tablero::buscarPieza(int y, int x){
    for(int i=0; i<numeroFichas; i++){
        if (listaPiezas[i]->getPosY() == y and listaPiezas[i]->getPosX() == x)
        {return listaPiezas[i];}
    }
    return nullptr;
}

void Tablero::eliminarPieza(int y, int x){
    Ficha* eliminado = buscarPieza(y,x);
    if(eliminado != nullptr){
        Ficha** temp = new Ficha* [numeroFichas-1];
        int cont = 0;
        for(int i=0; i<numeroFichas; i++){
            if (eliminado->getPosX() != listaPiezas[i]->getPosX() || eliminado->getPosY() != listaPiezas[i]->getPosY() || eliminado->getIcono() != listaPiezas[i]->getIcono()) {
                temp[cont] = listaPiezas[i];
                cont ++;
            }
        }
        delete[] listaPiezas;
        listaPiezas = temp;
        numeroFichas --;
        fichasEliminadas[0]= eliminado;
        cout << fichasEliminadas << endl;
        //delete eliminado;
    }
}

bool Tablero::moverPieza(int y1, int x1, int y2, int x2, bool turno) {
    Ficha* casillaInicio = buscarPieza(y1,x1);
    Ficha* casillaFinal = buscarPieza(y2,x2);
    if(casillaInicio == nullptr) {
        cout << endl << "Movimiento NO VALIDO: No hay una pieza en la posicion de inicio.";
        return false;
    }
    if(casillaInicio->getColor() != (turno?'B':'N')) {
        cout << endl << "Movimiento NO VALIDO: Solo se pueden elegir piezas";
        cout << ' ' << (turno?"blancas":"negras");
        return false;
    }
    if(not(casillaInicio->hacerMovimiento(y2,x2,casillaFinal))) {
        return false;
    }
    if(casillaFinal != nullptr) {eliminarPieza(y2,x2);}
    casillaInicio->setPosY(y2);
    casillaInicio->setPosX(x2);
    return true;

}












