//
// Created by Rafa on 07/05/2024.
//

#include "Recurso.h"
#include <string.h>

char *Recurso::getTitulo() {return this->titulo;}

Recurso::Recurso(char *titulo, int year, char* id) {
    strcpy(this->titulo, titulo);
    strcpy(this->id, id);
    this->year = year;
}