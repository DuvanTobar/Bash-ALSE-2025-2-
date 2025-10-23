#include "Biblioteca.h"
#include <iostream>

void Biblioteca::agregarLibro(const Libro& libro) {
    libros.push_back(libro);
}

void Biblioteca::eliminarLibro(const std::string& isbn) {
    for (auto it = libros.begin(); it != libros.end(); ++it) {
        if (it->getISBN() == isbn) {
            libros.erase(it);
            std::cout << "Libro eliminado.\n";
            return;
        }
    }
    std::cout << "No se encontró un libro con ese ISBN.\n";
}

void Biblioteca::mostrarDisponibles() const {
    std::cout << "\n📚 Libros disponibles:\n";
    for (const auto& libro : libros) {
        if (libro.estaDisponible()) {
            std::cout << "- " << libro.getTitulo() 
                      << " (" << libro.getAutor() << ")\n";
        }
    }
}

void Biblioteca::buscarPorTitulo(const std::string& titulo) const {
    std::cout << "\n🔎 Resultado de búsqueda por título:\n";
    for (const auto& libro : libros) {
        if (libro.getTitulo() == titulo) {
            std::cout << "- " << libro.getTitulo() 
                      << " (" << libro.getAutor() << ")\n";
        }
    }
}

void Biblioteca::buscarPorAutor(const std::string& autor) const {
    std::cout << "\n🔎 Resultado de búsqueda por autor:\n";
    for (const auto& libro : libros) {
        if (libro.getAutor() == autor) {
            std::cout << "- " << libro.getTitulo() 
                      << " (" << libro.getAutor() << ")\n";
        }
    }
}
