#ifndef Rato_h
#define Rato_h

const char CIMA = 'C';
const char BAIXO = 'B';
const char DIREITA = 'D';
const char ESQUERDA = 'E';

struct Rato{
    int posicaoX;
    int posicaoY;
    char icone = 'R';
    bool temQueijo = false;
    char ultimoMovimento;
};

#endif