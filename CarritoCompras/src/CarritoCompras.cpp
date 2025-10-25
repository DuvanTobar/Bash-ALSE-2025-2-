#include "CarritoCompras.h"
#include <iostream>

void CarritoCompras::agregarProducto(Producto* producto, int cantidad) {
    if (producto->getStock() < cantidad) {
        std::cout << " No hay suficiente stock para " << producto->getNombre() << "\n";
        return;
    }

    for (auto& item : items) {
        if (item.getProducto() == producto) {
            producto->reducirStock(cantidad);
            std::cout << " Se agregó más cantidad de " << producto->getNombre() << "\n";
            return;
        }
    }

    items.emplace_back(producto, cantidad);
    producto->reducirStock(cantidad);
    std::cout << " Producto agregado: " << producto->getNombre() << "\n";
}

void CarritoCompras::eliminarProducto(const std::string& nombreProducto) {
    for (auto it = items.begin(); it != items.end(); ++it) {
        if (it->getProducto()->getNombre() == nombreProducto) {
            it->getProducto()->aumentarStock(it->getCantidad());
            items.erase(it);
            std::cout << " Producto eliminado: " << nombreProducto << "\n";
            return;
        }
    }
    std::cout << " Producto no encontrado en el carrito.\n";
}

double CarritoCompras::calcularTotal() const {
    double total = 0;
    for (const auto& item : items)
        total += item.subtotal();
    return total;
}

void CarritoCompras::mostrarCarrito() const {
    if (items.empty()) {
        std::cout << "🛍 El carrito está vacío.\n";
        return;
    }

    std::cout << "\n---  Carrito de Compras ---\n";
    for (const auto& item : items)
        item.mostrar();
    std::cout << " Total: $" << calcularTotal() << "\n";
}

std::vector<ItemCarrito>& CarritoCompras::getItems() {
    return items;
}
