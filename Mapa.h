#ifndef Mapa_h
#define Mapa_h

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