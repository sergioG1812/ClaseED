#include "jugador.h"
#include <iostream>
#include <limits> 

Jugador::Jugador(std::string n) : nombre(n) {}

void Jugador::mostrarMano() const {
    std::cout << nombre << " - Cartas en mano:\n";
    for (size_t i = 0; i < mano.size(); i++) {
        std::cout << i + 1 << ". ";
        mano[i].mostrar();
        std::cout << std::endl;
    }
}

Carta Jugador::jugarCarta() {
    int opcion;
    while (true) {
        std::cout << "Selecciona el numero de la carta que deseas jugar: ";
        std::cin >> opcion;

        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Entrada invalida. Intentalo de nuevo.\n";
            continue;
        }

        if (opcion >= 1 && opcion <= static_cast<int>(mano.size())) {
            break;
        }

        std::cout << "Opción fuera de rango. Inténtalo de nuevo.\n";
    }

    Carta carta = mano[opcion - 1];
    mano.erase(mano.begin() + (opcion - 1));
    return carta;
}

void Jugador::ganarCartas(const std::vector<Carta>& cartas) {
    cartasGanadas.insert(cartasGanadas.end(), cartas.begin(), cartas.end());
}
