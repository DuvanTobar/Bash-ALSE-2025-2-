#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <string>
#include <iostream>

class Producto {
private:
    std::string nombre;
    double precio;
    int stock;

public:
    Producto(const std::string& nombre, double precio, int stock);
    
    std::string getNombre() const;
    double getPrecio() const;
    int getStock() const;

    void reducirStock(int cantidad);
    void aumentarStock(int cantidad);

    void mostrar() const;
};

#endif
