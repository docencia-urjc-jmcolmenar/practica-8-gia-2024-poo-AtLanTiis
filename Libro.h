//
// Created by Rafa on 07/05/2024.
//

#ifndef BIBLIOTECA_LIBRO_H
#define BIBLIOTECA_LIBRO_H

#include "Recurso.h"

class Libro : public Recurso {
private:
    int paginas;

public:
    Libro(char* titulo, int year, char* id, int paginas) : Recurso(titulo, year, id) {this->paginas = paginas;};
    double precio() override;
};

#endif //BIBLIOTECA_LIBRO_H
