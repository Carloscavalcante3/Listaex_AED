#include <stdio.h>

#define TAMANHO_MAX 100

struct Fila {
    int dados[TAMANHO_MAX];
    int inicio, fim;
};

void inicializar(struct Fila* f) {
    f->inicio = 0;
    f->fim = 0;
}

int isEmpty(struct Fila* f) {
    return f->inicio == f->fim;
}

void enqueue(struct Fila* f, int valor) {
    if (f->fim < TAMANHO_MAX) {
        f->dados[f->fim++] = valor;
    }
}

int dequeue(struct Fila* f) {
    if (!isEmpty(f)) {
        return f->dados[f->inicio++];
    }
    return -1;
}

int front(struct Fila* f) {
    if (!isEmpty(f)) {
        return f->dados[f->inicio];
    }
    return -1;
}

int main() {
    struct Fila fila;
    inicializar(&fila);

    enqueue(&fila, 5);
    enqueue(&fila, 10);
    printf("Frente: %d\n", front(&fila));
    printf("Removido: %d\n", dequeue(&fila));
    printf("Vazia? %d\n", isEmpty(&fila));

    return 0;
}
