#ifndef Mapa_h
#define Mapa_h

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const char PAREDE = 'P';
const char VAZIO = '.';
const char QUEIJO = 'Q';

struct Mapa{
    char cenario[5][5] = {
        
        VAZIO, PAREDE, PAREDE, VAZIO, VAZIO,
        VAZIO, VAZIO, VAZIO, VAZIO, PAREDE,
        VAZIO, PAREDE, VAZIO, VAZIO, VAZIO,
        VAZIO, VAZIO, VAZIO, VAZIO, PAREDE,
        VAZIO, PAREDE, QUEIJO, VAZIO, VAZIO
            
    };
    int posicEntradaX;
    int posicEntradaY;
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

void gerarEntradaAleatoria(Mapa &mapa, int tamanho){
    bool teste = true;
    while(teste){
        srand((int)time(0));
        int rand1 = rand() % tamanho;
        int rand2 = rand() % tamanho;

        if(mapa.cenario[rand1][rand2] != 'P' && mapa.cenario[rand1][rand2] != 'Q'){
            mapa.cenario[rand1][rand2] = 'E';
            mapa.posicEntradaX = rand1;
            mapa.posicEntradaY = rand2;
            teste = false;
        }            
    }  
}

#endif
