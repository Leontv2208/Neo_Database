#include "../include/pilha.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void create_stack(Stack *s, int max_size) {
    s->values = malloc(sizeof (int)*max_size);
    if(s->values==NULL){
        printf("Falha na alocação de memória");
        exit(1);
    }
    s->max_size = max_size;
    s->n_elem = 0;
    s->top = -1;
}

bool stack_is_empty(Stack *s){
    if(s->top==-1){
        return true;
    } else {
        return false;
    }
}

bool stack_is_full(Stack *s){
    if (s->top==s->max_size){
        return true;
    } else {
        return false;
    }
}

void stack_push(Stack *s, int n){
    if(stack_is_full(s)==false){
        s->top++;
        s->values[s->top] = n;
        s->n_elem++;
    }
}

int stack_pop(Stack *s){
    if (stack_is_empty(s)==false) {
        s->n_elem--;
        int x = s->values[s->top];
        s->top--;
        return x;
    }
}

int stack_size(Stack *s){
    return s->n_elem;
}



void destroy_stack(Stack *s){
    free(s->values);
}