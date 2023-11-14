cmake_minimum_required(VERSION 3.25.2)
project(libprg)

set(CMAKE_C_STANDARD 17)

add_executable(libprg teste.c
        biblioteca/arquivos/fila.c
        biblioteca/arquivos/pilha.c
        biblioteca/arquivos/lista_linear.c
        biblioteca/arquivos/encadeada/lista_simples.c)
