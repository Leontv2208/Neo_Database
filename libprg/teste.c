#include <stdio.h>
#include "biblioteca/include/encadeada/lista_simples.h"

int main() {

// inicio precisa ser um ponteiro
    no_t* inicio = NULL;
// adicionando
    adicionar(&inicio, 1);
    adicionar(&inicio, 2);
    adicionar(&inicio, 3);
// removendo
    remover(&inicio, 2);
// listando
    no_t* atual = inicio;

    if(buscar(&inicio, 1)) printf("Elemento presente\n");


    while(atual != NULL){
        printf("%d ", atual->dado);
        atual = atual->proximo;
    }
    destruir(&inicio);
    return 0;




}