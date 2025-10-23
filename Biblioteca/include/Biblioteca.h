#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H
class Libro;
#include <vector>
#include <string>

class Biblioteca {
    std::vector<Libro*> libros;
    std::vector<Libro> libros;

public:
    void agregarLibro(const Libro& libro);
    void eliminarLibro(const std::string& isbn);
    void mostrarDisponibles() const;
    void buscarPorTitulo(const std::string& titulo) const;
    void buscarPorAutor(const std::string& autor) const;
};

#endif
