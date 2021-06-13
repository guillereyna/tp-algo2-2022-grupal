#ifndef TP4_PACALGO2_PARTIDA_H
#define TP4_PACALGO2_PARTIDA_H

#include "Mapa.h"
#include <vector>
#include <tuple>

using namespace std;

typedef vector<vector<tuple<bool,bool,bool>>> Tablero;

class Partida {
    public:
        // constructor
        Partida(const Mapa m, Tablero t);

        // destructor
        ~Partida();

        // Mueve el jugador, si es posible, hacia la dirección indicada
        void Mover(const Direccion dir);

    private:
        Mapa* _mapa;
        Tablero* _tablero;
        Coordenada _posActual;
        int _cantMovimientos;
        int _inmunidad;
        bool _perdio;
        bool _gano;
        // metodos auxiliares/privados
        Coordenada moverCoordenada(Coordenada c, const Direccion dir);
        bool esMovimientoValido(const Coordenada c, const Direccion d);
        bool esPosicionValida(const Coordenada c);
        bool seAsusta(const Coordenada c);
        vector<Coordenada> posicionesACheckear(const Coordenada c);
};


#endif //TP4_PACALGO2_PARTIDA_H
