#ifndef Mapa_h
#define Mapa_h

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <stdlib.h>
#include "Rato.h"
using namespace std;

const char PAREDE = 'P';
const char VAZIO = '.';
const char QUEIJO = 'Q';

struct Mapa{
    char cenario[5][5] = {
        
        VAZIO,   VAZIO,  PAREDE, VAZIO,  QUEIJO,
        VAZIO,  PAREDE,   VAZIO, VAZIO,   VAZIO,
        VAZIO,   VAZIO,   VAZIO, VAZIO,   VAZIO,
        VAZIO,  PAREDE,   VAZIO, VAZIO,  PAREDE,
        VAZIO,  PAREDE,   VAZIO, VAZIO,  VAZIO
            
    };
    int tamanhoMatrix = 5;
};

void mostrarMapa(Mapa umMapa){
    for(int i = 0; i < umMapa.tamanhoMatrix; i++){
        for(int j = 0; j < umMapa.tamanhoMatrix; j++){
            cout << umMapa.cenario[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "**********************************" << endl;
}

void gerarEntradaAleatoria(Mapa &umMapa, Rato &umRato){
    bool validacaoNaMatriz = true;
    while(validacaoNaMatriz){
        srand((int)time(0));
        int rand1 = rand() % umMapa.tamanhoMatrix;
        int rand2 = rand() % umMapa.tamanhoMatrix;

        if(umMapa.cenario[rand1][rand2] != 'P' && umMapa.cenario[rand1][rand2] != 'Q'){
            umMapa.cenario[rand1][rand2] = 'E';
            umRato.posicaoX = rand1;
            umRato.posicaoY = rand2;
            validacaoNaMatriz = false;
        }            
    }  
}


bool acharCaminhoAutomaticamente(Mapa &umMapa, int posicaoX, int posicaoY, char deOndeVeio){
    mostrarMapa(umMapa);
    _sleep(1000);
    if(posicaoX < 0 || posicaoX >= umMapa.tamanhoMatrix || posicaoY < 0 || posicaoY >= umMapa.tamanhoMatrix){
        return false;
    } else if(umMapa.cenario[posicaoX][posicaoY] == 'Q'){
        cout << "Voce encontrou o queijo!" << endl;
        return true;
    } else if(umMapa.cenario[posicaoX][posicaoY] == 'P' || umMapa.cenario[posicaoX][posicaoY] == '+'){
        return false;
    } else{
        umMapa.cenario[posicaoX][posicaoY] = '+';
        if(acharCaminhoAutomaticamente(umMapa, posicaoX - 1, posicaoY, deOndeVeio) && deOndeVeio != NORTE){
            return true;
        } else if(acharCaminhoAutomaticamente(umMapa, posicaoX, posicaoY + 1, deOndeVeio) && deOndeVeio != LESTE){
            return true;
        } else if(acharCaminhoAutomaticamente(umMapa, posicaoX + 1, posicaoY, deOndeVeio) && deOndeVeio != SUL){
            return true;
        } else if(acharCaminhoAutomaticamente(umMapa, posicaoX, posicaoY - 1, deOndeVeio) && deOndeVeio != OESTE){
            return true;
        } else{
            umMapa.cenario[posicaoX][posicaoY] = '.';
            return false;
        }
        cout << "Nao foi possivel chegar ao queijo" << endl;
    }
}

#endif