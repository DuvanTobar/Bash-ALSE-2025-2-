#ifndef USUARIO_H
#define USUARIO_H

#include <string>
#include <vector>
#include "CarritoCompras.h"

struct Compra {
    std::vector<ItemCarrito> items;
    double total;
};

class Usuario {
private:
    std::string nombre;
    std::vector<Compra> historial;

public:
    Usuario(const std::string& nombre);

    void comprar(CarritoCompras& carrito);
    void mostrarHistorial() const;
};

#endif
