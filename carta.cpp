#include "carta.h"

std::string colorToString(Color color) {
    switch(color) {
        case Color::Amarillo: return "Amarillo";
        case Color::Azul:     return "Azul";
        case Color::Rojo:     return "Rojo";
        case Color::Negro:    return "Negro";
    }
    return "";
}

Carta::Carta(Color c, int v) : color(c), valor(v) {}

void Carta::mostrar() const {
    std::cout << "[" << colorToString(color) << " " << valor << "]";
}