#include <iostream>
#include "Rato.h"
#include "Mapa.h"
using namespace std;

int main(){
    Mapa jogo;
    Rato rato;
    gerarEntradaAleatoria(jogo, rato);
    acharCaminhoAutomaticamente(jogo, rato.posicaoX, rato.posicaoY, rato.deOndeVeio);
    return 0;
}