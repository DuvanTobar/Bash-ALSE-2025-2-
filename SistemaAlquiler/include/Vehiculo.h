#ifndef VEHICULO_H
#define VEHICULO_H

#include <string>
#include <iostream>

class Vehiculo {
protected:
    std::string marca;
    std::string modelo;
    std::string placa;
    bool disponible;

public:
    Vehiculo(const std::string& marca, const std::string& modelo, const std::string& placa);
    virtual ~Vehiculo() = default;

    virtual void mostrarInformacion() const;
    bool estaDisponible() const;
    void alquilar();
    void devolver();

    std::string getPlaca() const;
};

#endif
