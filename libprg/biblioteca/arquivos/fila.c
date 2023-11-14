#include "../include/fila.h"
#include <stdio.h>
#include <stdlib.h>


void create_queue(Queue *q, int size){
    q->values = malloc(sizeof(int)*size);
    if (q->values==NULL){
        printf("Falha na alocação de memória\n");
        exit(1);
    }
    q->begin = 0;
    q->end = 0;
    q->capacity = size;
}

void print_queue(Queue *q){
    if (q->begin <= q->end)
        for(int i=q->begin; i < q->end; i++){
            printf("%d",q->values[i]);
        } else{
        for(int i = q->begin; i < q->capacity; i++)
            printf("%d", q->values[i]);
        for(int i = 0; i < q->end; i++)
            printf("%d", q->values[i]);
    }
}

void enqueue(Queue *q, int x){
    q->values[q->end]=x;
    q->end++;
}

void dequeue(Queue *q){
    printf("%d", q->values[q->begin]);
    q->values[q->begin]= 0;
    q->begin++;
}

int size(Queue *q){
    if (q->end > q->begin){
        return q->end - q->begin;
    } else if (q->begin > q->end){
        return (q->begin - q->end);
    } else if (q->begin = q->end){
        return 0;
    }
}

int tail(Queue *q){
    return q->values[q->end];
}

int head(Queue *q){
    return q->values[q->begin];
}

void empty_queue(Queue *q){





}