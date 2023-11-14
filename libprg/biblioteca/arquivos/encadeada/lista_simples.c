#include "../../include/encadeada/lista_simples.h"
#include <stdio.h>
#include <stdlib.h>

void adicionar(no_t** inicio, int dado){
    no_t* novo = (no_t*) malloc(sizeof (no_t));
    novo->dado = dado;
    novo->proximo = *inicio;
    *inicio = novo;
}

bool remover(no_t** inicio, int dado){
    no_t *atual = *inicio;
    no_t *anterior = NULL;
    while (atual != NULL) {
        if (atual->dado == dado) {
            if (anterior == NULL) {
                *inicio = atual->proximo;
            } else {
                anterior->proximo = atual->proximo;
            }
            free(atual);
            return true;
        }
        anterior = atual;
        atual = atual->proximo;
    }
    return false;
}

void destruir(no_t** inicio){
    no_t* atual = *inicio;
    no_t* prox;
    while(atual != NULL){
        prox = atual->proximo;
        free(atual);
        atual = prox;
    }
    *inicio = NULL;
}

bool buscar(no_t* inicio, int dado){
    no_t* atual = inicio;
    while(atual != NULL){
        if(atual->dado == dado){
            return true;
        }
        atual = atual->proximo;
    }
    return false;
}