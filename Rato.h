#ifndef Rato_h
#define Rato_h

const char NORTE = 'N';
const char SUL = '';
const char LESTE = 'L';
const char OESTE = 'O';

struct Rato{
    int posicaoX;
    int posicaoY;
    char icone = 'R';
    bool temQueijo = false;
    char ultimoMovimento;
};

#endif
