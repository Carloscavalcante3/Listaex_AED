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

void converterParaBinario(int numero) {
    struct Pilha pilha;
    inicializar(&pilha);

    if (numero == 0) {
        printf("0\n");
        return;
    }

    while (numero > 0) {
        push(&pilha, numero % 2);
        numero /= 2;
    }

    while (!isEmpty(&pilha)) {
        printf("%d", pop(&pilha));
    }

    printf("\n");
}

int main() {
    int numero;
    scanf("%d", &numero);
    converterParaBinario(numero);
    return 0;
}
