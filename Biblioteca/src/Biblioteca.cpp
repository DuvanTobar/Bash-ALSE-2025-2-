#include "Biblioteca.h"
#include <iostream>

void Biblioteca::agregarLibro(const Libro& libro) {
    libros.push_back(libro);
}

void Biblioteca::eliminarLibroPorISBN(const std::string& isbn) {
    for (auto it = libros.begin(); it != libros.end(); ++it) {
        if (it->getISBN() == isbn) {
            libros.erase(it);
            std::cout << "Libro eliminado.\n";
            return;
        }
    }
    std::cout << "Libro no encontrado.\n";
}

void Biblioteca::mostrarLibrosDisponibles() const {
    std::cout << "Libros disponibles:\n";
    for (const auto& libro : libros) {
        if (libro.estaDisponible()) {
            std::cout << " - " << libro.getTitulo()
                      << " de " << libro.getAutor()
                      << " (ISBN: " << libro.getISBN() << ")\n";
        }
    }
}

void Biblioteca::buscarPorTitulo(const std::string& titulo) const {
    std::cout << "Buscando por título: " << titulo << "\n";
    for (const auto& libro : libros) {
        if (libro.getTitulo().find(titulo) != std::string::npos) {
            std::cout << " - " << libro.getTitulo()
                      << " de " << libro.getAutor()
                      << " (ISBN: " << libro.getISBN() << ")\n";
        }
    }
}

void Biblioteca::buscarPorAutor(const std::string& autor) const {
    std::cout << "Buscando por autor: " << autor << "\n";
    for (const auto& libro : libros) {
        if (libro.getAutor().find(autor) != std::string::npos) {
            std::cout << " - " << libro.getTitulo()
                      << " de " << libro.getAutor()
                      << " (ISBN: " << libro.getISBN() << ")\n";
        }
    }
}
