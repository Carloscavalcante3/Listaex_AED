#include <stdio.h>

#define TAMANHO_MAX 100

struct Pilha {
    int dados[TAMANHO_MAX];
    int topo;
};

struct Fila {
    int dados[TAMANHO_MAX];
    int inicio, fim;
};

void inicializarPilha(struct Pilha* p) {
    p->topo = -1;
}

void push(struct Pilha* p, int valor) {
    if (p->topo < TAMANHO_MAX - 1) {
        p->dados[++(p->topo)] = valor;
    }
}

int pop(struct Pilha* p) {
    if (p->topo >= 0) {
        return p->dados[(p->topo)--];
    }
    return -1;
}

void inicializarFila(struct Fila* f) {
    f->inicio = 0;
    f->fim = 0;
}

void enqueue(struct Fila* f, int valor) {
    if (f->fim < TAMANHO_MAX) {
        f->dados[f->fim++] = valor;
    }
}

int dequeue(struct Fila* f) {
    if (f->inicio < f->fim) {
        return f->dados[(f->inicio)++];
    }
    return -1;
}

int isEmptyFila(struct Fila* f) {
    return f->inicio == f->fim;
}

void inverterFila(struct Fila* f) {
    struct Pilha p;
    inicializarPilha(&p);

    while (!isEmptyFila(f)) {
        push(&p, dequeue(f));
    }

    while (p.topo >= 0) {
        enqueue(f, pop(&p));
    }
}

int main() {
    struct Fila fila;
    inicializarFila(&fila);

    enqueue(&fila, 1);
    enqueue(&fila, 2);
    enqueue(&fila, 3);

    inverterFila(&fila);

    while (!isEmptyFila(&fila)) {
        printf("%d ", dequeue(&fila));
    }

    return 0;
}
