#include "Libro.h"

Libro::Libro(std::string t, std::string a, std::string i, bool d)
    : titulo(t), autor(a), isbn(i), disponible(d) {}

std::string Libro::getTitulo() const { return titulo; }
std::string Libro::getAutor() const { return autor; }
std::string Libro::getISBN() const { return isbn; }
bool Libro::estaDisponible() const { return disponible; }

void Libro::prestar() { disponible = false; }
void Libro::devolver() { disponible = true; }
