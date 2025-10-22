#ifndef LIBRO_H
#define LIBRO_H
using namespace std;
#include <string>

class Libro {
private:
    string titulo;
    string autor;
    string isbn;
    bool disponible;

public:
    // Constructor
    Libro(const string& titulo, const string& autor, const string& isbn);

    string getTitulo() const;
    string getAutor() const;
    string getISBN() const;
    bool estaDisponible() const;

    void prestar();   
    void devolver();  
};

#endif