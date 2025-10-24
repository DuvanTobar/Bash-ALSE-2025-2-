#include "SistemaAlquiler.h"
#include "Auto.h"
#include "Bicicleta.h"
#include <iostream>
#include <memory>

int main() {
    SistemaAlquiler sistema;

    // Registrar vehículos
    sistema.registrarVehiculo(std::make_shared<Auto>("Toyota", "Corolla", "ABC123", 5));
    sistema.registrarVehiculo(std::make_shared<Bicicleta>("Trek", "FX3", "BIK001", "Montaña"));
    sistema.registrarVehiculo(std::make_shared<Auto>("Chevrolet", "Spark", "DEF456", 4));

    sistema.mostrarVehiculosDisponibles();

    std::cout << "\n--- Alquilando vehículo ABC123 ---\n";
    sistema.alquilarVehiculo("ABC123");

    sistema.mostrarVehiculosDisponibles();

    std::cout << "\n--- Devolviendo vehículo ABC123 ---\n";
    sistema.devolverVehiculo("ABC123");

    sistema.mostrarVehiculosDisponibles();

    return 0;
}
