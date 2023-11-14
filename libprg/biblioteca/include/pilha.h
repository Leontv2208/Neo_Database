#ifndef PROJETOS_PRG_II_STACK_H
#define PROJETOS_PRG_II_STACK_H
#include <stdbool.h>

typedef struct{
    int *values;
    int top;
    int n_elem;
    int max_size;
} Stack;

void create_stack(Stack *s, int max_size);
void stack_push(Stack *s, int n);
int stack_pop(Stack *s);
int stack_size(Stack *s);
bool stack_is_empty(Stack *s);
bool stack_is_full(Stack *s);
void destroy_stack(Stack *s);

#endif //PROJETOS_PRG_II_STACK_H
