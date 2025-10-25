#include "Producto.h"

Producto::Producto(const std::string& nombre, double precio, int stock)
    : nombre(nombre), precio(precio), stock(stock) {}

std::string Producto::getNombre() const { return nombre; }
double Producto::getPrecio() const { return precio; }
int Producto::getStock() const { return stock; }

void Producto::reducirStock(int cantidad) {
    stock -= cantidad;
}

void Producto::aumentarStock(int cantidad) {
    stock += cantidad;
}

void Producto::mostrar() const {
    std::cout << nombre << " - $" << precio << " (Stock: " << stock << ")\n";
}
