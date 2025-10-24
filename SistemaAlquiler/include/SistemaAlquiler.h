#ifndef SISTEMAALQUILER_H
#define SISTEMAALQUILER_H

#include "Vehiculo.h"
#include <vector>
#include <memory>

class SistemaAlquiler {
private:
    std::vector<std::shared_ptr<Vehiculo>> vehiculos;

public:
    void registrarVehiculo(std::shared_ptr<Vehiculo> vehiculo);
    void mostrarVehiculosDisponibles() const;
    void alquilarVehiculo(const std::string& placa);
    void devolverVehiculo(const std::string& placa);
};

#endif
