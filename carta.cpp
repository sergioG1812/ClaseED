#include "carta.h"
#include <string>
Carta::Carta(Color c, int v) : color(c), valor(v) {}

void Carta::mostrar() const {
    string colorcito;
    if (color == Amarillo)
        colorcito = "Amarillo";
    else if (color == Azul)
        colorcito = "Azul";
    else if (color == Rojo)
        colorcito = "Rojo";
    else if (color == Negro)
        colorcito = "Negro";

    cout << "[" << colorcito << " " << valor << "]";
}
