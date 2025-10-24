#include "SistemaAlquiler.h"
#include <iostream>

void SistemaAlquiler::registrarVehiculo(std::shared_ptr<Vehiculo> vehiculo) {
    vehiculos.push_back(vehiculo);
}

void SistemaAlquiler::mostrarVehiculosDisponibles() const {
    std::cout << "\nVehículos disponibles:\n";
    for (const auto& v : vehiculos) {
        if (v->estaDisponible()) {
            v->mostrarInformacion();
            std::cout << "-------------------\n";
        }
    }
}

void SistemaAlquiler::alquilarVehiculo(const std::string& placa) {
    for (auto& v : vehiculos) {
        if (v->getPlaca() == placa) {
            if (v->estaDisponible()) {
                v->alquilar();
                std::cout << "Vehículo con placa " << placa << " alquilado exitosamente.\n";
            } else {
                std::cout << "El vehículo ya está alquilado.\n";
            }
            return;
        }
    }
    std::cout << "No se encontró un vehículo con la placa " << placa << ".\n";
}

void SistemaAlquiler::devolverVehiculo(const std::string& placa) {
    for (auto& v : vehiculos) {
        if (v->getPlaca() == placa) {
            if (!v->estaDisponible()) {
                v->devolver();
                std::cout << "Vehículo con placa " << placa << " devuelto exitosamente.\n";
            } else {
                std::cout << "El vehículo no estaba alquilado.\n";
            }
            return;
        }
    }
    std::cout << "No se encontró un vehículo con la placa " << placa << ".\n";
}
