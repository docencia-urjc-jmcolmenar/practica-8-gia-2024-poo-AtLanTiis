#include <iostream>
#include "Recurso.h"
#include "Libro.h"
#include "Pelicula.h"

int const MAX_RECURSOS = 100;

int main() {
    // Declaraci�n de array polim�rfico de recursos:
    Recurso *recursos[MAX_RECURSOS];

    // Inclusi�n de elementos:
    int numRecursos = 0;
    recursos[numRecursos++] = new Libro("El senor de los anillos", 1954, "ISBN1234", 1000);
    recursos[numRecursos++] = new Pelicula("Inception", 2010, "IMDB5678", 148);

    // C�lculo de coste de pr�stamos:
    for (int i = 0; i < numRecursos; i++) {
        std::cout << "Coste de prestamo de \"" << recursos[i]->getTitulo() << "\": " << recursos[i]->precio() << std::endl;
    }

    return 0;
}
