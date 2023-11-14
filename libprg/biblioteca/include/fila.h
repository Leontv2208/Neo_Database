#ifndef PROJETOS_PRG_II_FILA_H
#define PROJETOS_PRG_II_FILA_H

typedef struct{
    int *values;
    int begin;
    int end;
    int capacity;
} Queue;

void create_queue(Queue *q, int size);
void print_queue(Queue *q);

#endif //PROJETOS_PRG_II_FILA_H
