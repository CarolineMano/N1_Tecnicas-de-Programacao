#ifndef Mapa_h
#define Mapa_h

#include <iostream>
using namespace std;

const char PAREDE = 'P';
const char VAZIO = '.';
const char QUEIJO = 'Q';

struct Mapa{
    char cenario[5][5] = {
        VAZIO, PAREDE, PAREDE, VAZIO, VAZIO,
        VAZIO, VAZIO, VAZIO, VAZIO, VAZIO,
        VAZIO, PAREDE, QUEIJO, VAZIO, VAZIO,
        VAZIO, PAREDE, VAZIO, VAZIO, VAZIO,
        VAZIO, VAZIO, VAZIO, VAZIO, VAZIO
    };
};

void mostrarMapa(Mapa mapa, int tamanho){
    for(int i = 0; i < tamanho; i++){
        for(int j = 0; j < tamanho; j++){
            cout << mapa.cenario[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "**********************************" << endl;
}

#endif