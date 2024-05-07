//
// Created by Rafa on 07/05/2024.
//

#define MAX_CHAR 50

#ifndef BIBLIOTECA_RECURSO_H
#define BIBLIOTECA_RECURSO_H

class Recurso {
protected:
    char titulo[MAX_CHAR];
    char id[MAX_CHAR];
    int year;

public:
    Recurso(char* titulo, int year, char* id);
    char* getTitulo();
    virtual double precio() = 0;
};

#endif //BIBLIOTECA_RECURSO_H
