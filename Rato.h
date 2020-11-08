#ifndef Rato_h
#define Rato_h

const char NORTE = 'N';
const char SUL = 'S';
const char LESTE = 'L';
const char OESTE = 'O';

struct Rato{
    int posicaoX = 0;
    int posicaoY = 0;
    char icone = 'R';
    bool temQueijo = false;
    char deOndeVeio;
};

#endif