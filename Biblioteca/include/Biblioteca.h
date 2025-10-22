#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H
#include <vector>
#include <string>

class Libro;  

class Biblioteca {
private:
    std::vector<Libro> libros;

public:
    void agregarLibro(const Libro& libro);
    void eliminarLibroPorISBN(const std::string& isbn);
    void mostrarLibrosDisponibles() const;
    void buscarPorTitulo(const std::string& titulo) const;
    void buscarPorAutor(const std::string& autor) const;
};

#endif
