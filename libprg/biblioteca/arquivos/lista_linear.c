#include "../include/lista_linear.h"
#include <stdio.h>
#include <stdlib.h>

void create_list(List *l, int max_size){
    l->values = malloc((sizeof(int)) * max_size);
    if (l->values==NULL){
        printf("Falha na alocação de memória\n");
        exit(1);
    }
    l->max_size = max_size;
    l->n_elem = 0;
}

int linear_search(List *l, int x){
    //Retorna 0 se encontrar elemento, e 1 quando não
    for(int i=0;i<l->n_elem;i++){
        if (x== l->values[i]){
            return i;
        }
        return -1;
    }
}

void print_list(List *l){
    for(int i = 0; i< l->n_elem;i++){
        printf("%d ", l->values[i]);
    }

}

void non_ordered_insert(List *l, int x){

    for(int i=0;i<l->n_elem;i++){
        if(l->values[i]==x){
            return;
        }
    }
    l->values[l->n_elem]=x;
    l->n_elem++;
}

void non_ordered_remove(List *l, int x){

    for(int i=0;i<l->n_elem;i++){
        if(l->values[i]==x){
            for(i;i<l->n_elem;i++){
                l->values[i] = l->values[i+1];
            }
        }
    }
    l->n_elem = l->n_elem - 1;

}

int binary_search(List *l, int x) {

    int begin = 1;
    int end = l->n_elem;
    do {
        int mid = begin + ((end - begin) / 2);
        if (l->values[mid] = x) {
            return mid;
        } else if (l->values[mid] < x) {
            begin = mid + 1;
        } else {
            end = mid - 1;
        }
    } while (begin <= end);
}

void ordered_insert(List *l, int x) {
    int j;
    for (int i = 0; i < l->n_elem; i++) {
        if (x < l->values[i]) {
            j = i;
            break;
        }
        if (x > l->values[l->n_elem - 1]) {
            j = l->n_elem;
            break;
        }
    }
    if (j != l->n_elem) {
        int m = l->n_elem - j + 1;
        for (int i = 0; i <= m; i++) {
            l->values[l->n_elem - i + 2] = l->values[l->n_elem - i + 1];
        }
    }

    l->values[j] = x;
    l->max_size + sizeof(int);
    l->n_elem+1;
}