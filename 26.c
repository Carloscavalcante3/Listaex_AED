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

int expressaoValida(char expressao[]) {
    struct Pilha pilha;
    inicializar(&pilha);
    int i;
    for (i = 0; expressao[i] != '\0'; i++) {
        if (expressao[i] == '(') {
            push(&pilha, '(');
        } else if (expressao[i] == ')') {
            if (isEmpty(&pilha)) {
                return 0;
            }
            pop(&pilha);
        }
    }
    return isEmpty(&pilha);
}

int main() {
    char expressao[100];
    scanf("%s", expressao);

    if (expressaoValida(expressao)) {
        printf("Valido\n");
    } else {
        printf("Invalido\n");
    }

    return 0;
}
