//
// Created by Rafa on 07/05/2024.
//

#include "Libro.h"

#define TASA 0.05

double Libro::precio() {return TASA * this->paginas;}
