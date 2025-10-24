#include "Vehiculo.h"

Vehiculo::Vehiculo(const std::string& marca, const std::string& modelo, const std::string& placa)
    : marca(marca), modelo(modelo), placa(placa), disponible(true) {}

void Vehiculo::mostrarInformacion() const {
    std::cout << "Marca: " << marca << " | Modelo: " << modelo
              << " | Placa: " << placa << (disponible ? " | Disponible" : " | Alquilado") << std::endl;
}

bool Vehiculo::estaDisponible() const { return disponible; }

void Vehiculo::alquilar() { disponible = false; }

void Vehiculo::devolver() { disponible = true; }

std::string Vehiculo::getPlaca() const { return placa; }
