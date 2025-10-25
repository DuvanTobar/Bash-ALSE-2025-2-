#ifndef ITEMCARRITO_H
#define ITEMCARRITO_H

#include "Producto.h"

class ItemCarrito {
private:
    Producto* producto;
    int cantidad;

public:
    ItemCarrito(Producto* producto, int cantidad);

    Producto* getProducto() const;
    int getCantidad() const;
    double subtotal() const;

    void mostrar() const;
};

#endif
