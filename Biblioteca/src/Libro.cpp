#include "Libro.h"
using namespace std;

Libro::Libro(const string& titulo, const string& autor, const string& isbn)
    : titulo(titulo), autor(autor), isbn(isbn), disponible(true) {}

string Libro::getTitulo() const {
    return titulo;
}

string Libro::getAutor() const {
    return autor;
}

string Libro::getISBN() const {
    return isbn;
}

bool Libro::estaDisponible() const {
    return disponible;
}

void Libro::prestar() {
    disponible = false;
}

void Libro::devolver() {
    disponible = true;
}
