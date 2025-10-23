#include "../include/Biblioteca.h"
#include "../include/Libro.h"
#include <iostream>
using namespace std;

int main() {
    Biblioteca miBiblioteca;

    Libro l1("Cien años de soledad", "Gabriel García Márquez", "001");
    Libro l2("Hábitos Atómicos", "James Clear", "002");
    Libro l3("Padre Rico, Padre Pobre", "Robert Kiyosaki y Lechter", "003");

    miBiblioteca.agregarLibro(l1);
    miBiblioteca.agregarLibro(l2);
    miBiblioteca.agregarLibro(l3);

    miBiblioteca.mostrarLibrosDisponibles();

    cout << "\nBuscando por autor 'Clear':\n";
    miBiblioteca.buscarPorAutor("Clear");

    miBiblioteca.eliminarLibroPorISBN("002");

    miBiblioteca.mostrarLibrosDisponibles();

    return 0;
}
