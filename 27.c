#include <stdio.h>
#include <string.h>

#define TAMANHO_MAX 100

struct Pilha {
    char dados[TAMANHO_MAX];
    int topo;
};

void inicializar(struct Pilha* p) {
    p->topo = -1;
}

int isEmpty(struct Pilha* p) {
    return p->topo == -1;
}

void push(struct Pilha* p, char valor) {
    if (p->topo < TAMANHO_MAX - 1) {
        p->dados[++(p->topo)] = valor;
    }
}

char pop(struct Pilha* p) {
    if (!isEmpty(p)) {
        return p->dados[(p->topo)--];
    }
    return '\0';
}

void inverterString(char str[]) {
    struct Pilha pilha;
    inicializar(&pilha);
    int i;

    for (i = 0; str[i] != '\0'; i++) {
        push(&pilha, str[i]);
    }

    for (i = 0; !isEmpty(&pilha); i++) {
        str[i] = pop(&pilha);
    }

    str[i] = '\0';
}

int main() {
    char texto[100];
    scanf("%s", texto);
    inverterString(texto);
    printf("%s\n", texto);
    return 0;
}
