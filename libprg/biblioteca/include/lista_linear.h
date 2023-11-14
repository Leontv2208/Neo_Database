#ifndef PROJETOS_PRG_II_LISTA_H
#define PROJETOS_PRG_II_LISTA_H

typedef struct{
    int *values;
    int max_size;
    int n_elem;
} List;

void create_list(List *l, int max_size);
void print_list(List *l);
int linear_search(List *l, int x);
void non_ordered_insert(List *l, int x);
void non_ordered_remove(List *l, int x);
int binary_search(List *l, int x);
void ordered_insert(List *l, int x);
void ordered_remove(List *l, int x);

#endif //PROJETOS_PRG_II_LISTA_H
