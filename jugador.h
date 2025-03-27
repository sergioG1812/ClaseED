#ifndef JUGADOR_H
#define JUGADOR_H

#include "carta.h"
#include <vector>
#include <string>

class Jugador {
public:
    std::string nombre;
    std::vector<Carta> mano;
    std::vector<Carta> cartasGanadas;

    Jugador(std::string n);
    void mostrarMano() const;
    Carta jugarCarta();
    void ganarCartas(const std::vector<Carta>& cartas);
};

#endif