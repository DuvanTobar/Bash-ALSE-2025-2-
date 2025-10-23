#ifndef LIBRO_H
#define LIBRO_H

#include <string>

class Libro {
private:
    std::string titulo;
    std::string autor;
    std::string isbn;
    bool disponible;

public:
    Libro(std::string t, std::string a, std::string i, bool d = true);

    std::string getTitulo() const;
    std::string getAutor() const;
    std::string getISBN() const;
    bool estaDisponible() const;

    void prestar();
    void devolver();
};

#endif
