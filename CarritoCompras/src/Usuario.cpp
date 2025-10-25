#include "Usuario.h"
#include <iostream>

Usuario::Usuario(const std::string& nombre) : nombre(nombre) {}

void Usuario::comprar(CarritoCompras& carrito) {
    double total = carrito.calcularTotal();

    if (total == 0) {
        std::cout << " No hay productos en el carrito.\n";
        return;
    }

    Compra compra;
    compra.items = carrito.getItems();
    compra.total = total;
    historial.push_back(compra);

    std::cout << "✅ " << nombre << " realizó una compra por $" << total << "\n";
    carrito.getItems().clear();
}

void Usuario::mostrarHistorial() const {
    if (historial.empty()) {
        std::cout << " No hay compras registradas.\n";
        return;
    }

    std::cout << "\n Historial de compras de " << nombre << ":\n";
    for (size_t i = 0; i < historial.size(); ++i) {
        std::cout << "\nCompra #" << (i + 1) << ":\n";
        for (const auto& item : historial[i].items)
            item.mostrar();
        std::cout << "Total: $" << historial[i].total << "\n";
    }
}
