#include "ItemCarrito.h"
#include <iostream>

ItemCarrito::ItemCarrito(Producto* producto, int cantidad)
    : producto(producto), cantidad(cantidad) {}

Producto* ItemCarrito::getProducto() const { return producto; }
int ItemCarrito::getCantidad() const { return cantidad; }

double ItemCarrito::subtotal() const {
    return producto->getPrecio() * cantidad;
}

void ItemCarrito::mostrar() const {
    std::cout << producto->getNombre() << " x" << cantidad
              << " = $" << subtotal() << "\n";
}
