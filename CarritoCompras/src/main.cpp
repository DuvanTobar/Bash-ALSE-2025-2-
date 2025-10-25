#include <iostream>
#include "Producto.h"
#include "ItemCarrito.h"
#include "CarritoCompras.h"
#include "Usuario.h"

int main() {
    Producto camisa("Camisa", 50000, 10);
    Producto pantalon("Pantalón", 80000, 5);
    Producto zapatos("Zapatos", 120000, 3);

    CarritoCompras carrito;
    Usuario usuario("Duván");

    carrito.agregarProducto(&camisa, 2);
    carrito.agregarProducto(&pantalon, 1);
    carrito.mostrarCarrito();

    carrito.eliminarProducto("Pantalón");
    carrito.mostrarCarrito();

    usuario.comprar(carrito);
    usuario.mostrarHistorial();

    return 0;
}

