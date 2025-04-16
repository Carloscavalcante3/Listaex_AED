#include <stdio.h>

#define TAMANHO_MAX 5

struct FilaCircular {
    int dados[TAMANHO_MAX];
    int inicio, fim, tamanho;
};

void inicializar(struct FilaCircular* f) {
    f->inicio = 0;
    f->fim = 0;
    f->tamanho = 0;
}

int isEmpty(struct FilaCircular* f) {
    return f->tamanho == 0;
}

void enqueue(struct FilaCircular* f, int valor) {
    if (f->tamanho < TAMANHO_MAX) {
        f->dados[f->fim] = valor;
        f->fim = (f->fim + 1) % TAMANHO_MAX;
        f->tamanho++;
    }
}

int dequeue(struct FilaCircular* f) {
    if (!isEmpty(f)) {
        int valor = f->dados[f->inicio];
        f->inicio = (f->inicio + 1) % TAMANHO_MAX;
        f->tamanho--;
        return valor;
    }
    return -1;
}

int front(struct FilaCircular* f) {
    if (!isEmpty(f)) {
        return f->dados[f->inicio];
    }
    return -1;
}

int main() {
    struct FilaCircular fila;
    inicializar(&fila);

    enqueue(&fila, 1);
    enqueue(&fila, 2);
    enqueue(&fila, 3);
    printf("Frente: %d\n", front(&fila));
    dequeue(&fila);
    enqueue(&fila, 4);
    printf("Frente: %d\n", front(&fila));

    return 0;
}
