//
// Created by Rafa on 07/05/2024.
//

#ifndef BIBLIOTECA_PELICULA_H
#define BIBLIOTECA_PELICULA_H

#include "Recurso.h"

class Pelicula : public Recurso {
private:
    int mins;

public:
    Pelicula(char* titulo, int year, char* id, int mins) : Recurso(titulo, year, id) {this->mins = mins;};
    double precio() override;
};

#endif //BIBLIOTECA_PELICULA_H
