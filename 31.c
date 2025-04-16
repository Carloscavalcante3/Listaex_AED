#include <stdio.h>
#include <string.h>

#define TAMANHO_MAX 100

struct Cliente {
    char nome[50];
};

struct Fila {
    struct Cliente dados[TAMANHO_MAX];
    int inicio, fim;
};

void inicializar(struct Fila* f) {
    f->inicio = 0;
    f->fim = 0;
}

int isEmpty(struct Fila* f) {
    return f->inicio == f->fim;
}

void enqueue(struct Fila* f, struct Cliente c) {
    if (f->fim < TAMANHO_MAX) {
        f->dados[f->fim++] = c;
    }
}

struct Cliente dequeue(struct Fila* f) {
    struct Cliente vazio = {"Nenhum"};
    if (!isEmpty(f)) {
        return f->dados[f->inicio++];
    }
    return vazio;
}

int main() {
    struct Fila fila;
    inicializar(&fila);

    struct Cliente c1 = {"Carlos"};
    struct Cliente c2 = {"Maria"};
    struct Cliente c3 = {"João"};

    enqueue(&fila, c1);
    enqueue(&fila, c2);
    enqueue(&fila, c3);

    while (!isEmpty(&fila)) {
        struct Cliente atendido = dequeue(&fila);
        printf("Atendendo: %s\n", atendido.nome);
    }

    return 0;
}
