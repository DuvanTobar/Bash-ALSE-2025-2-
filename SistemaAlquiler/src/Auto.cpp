#include "Auto.h"
#include <iostream>

Auto::Auto(const std::string& marca, const std::string& modelo, const std::string& placa, int capacidad)
    : Vehiculo(marca, modelo, placa), capacidadPasajeros(capacidad) {}

void Auto::mostrarInformacion() const {
    std::cout << "[AUTO] ";
    Vehiculo::mostrarInformacion();
    std::cout << "Capacidad de pasajeros: " << capacidadPasajeros << std::endl;
}
