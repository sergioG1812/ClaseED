#ifndef CARTA_H
#define CARTA_H

#include <iostream>
#include <string>

enum class Color { Amarillo, Azul, Rojo, Negro };

std::string colorToString(Color color);

class Carta {
public:
    Color color;
    int valor;

    Carta(Color c, int v);
    void mostrar() const;
};

#endif
