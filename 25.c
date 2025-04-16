#include <stdio.h>

#define TAMANHO_MAX 100

struct Pilha {
    int dados[TAMANHO_MAX];
    int topo;
};

void inicializar(struct Pilha* p) {
    p->topo = -1;
}

int isEmpty(struct Pilha* p) {
    return p->topo == -1;
}

void push(struct Pilha* p, int valor) {
    if (p->topo < TAMANHO_MAX - 1) {
        p->dados[++(p->topo)] = valor;
    }
}

int pop(struct Pilha* p) {
    if (!isEmpty(p)) {
        return p->dados[(p->topo)--];
    }
    return -1;
}

int top(struct Pilha* p) {
    if (!isEmpty(p)) {
        return p->dados[p->topo];
    }
    return -1;
}

int main() {
    struct Pilha pilha;
    inicializar(&pilha);

    push(&pilha, 10);
    push(&pilha, 20);
    printf("Topo: %d\n", top(&pilha));
    printf("Pop: %d\n", pop(&pilha));
    printf("Está vazia? %d\n", isEmpty(&pilha));

    return 0;
}
