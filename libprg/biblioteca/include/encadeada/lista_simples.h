#ifndef PROJETOS_PRG_II_LISTA_ENCADEADA_H
#define PROJETOS_PRG_II_LISTA_ENCADEADA_H
#include <stdbool.h>

typedef struct no{
    int dado;
    struct no* proximo;
    struct no* anterior;
} no_t;

void adicionar(no_t** inicio, int dado);
bool remover(no_t** inicio, int dado);
void destruir(no_t** inicio);
bool buscar(no_t* inicio, int dado);

#endif //PROJETOS_PRG_II_LISTA_ENCADEADA_H
