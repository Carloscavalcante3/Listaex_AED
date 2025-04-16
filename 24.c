#include <stdio.h>
#include <stdlib.h>

struct No {
    int valor;
    struct No* proximo;
};

void inserirInicio(struct No** cabeca, int valor) {
    struct No* novoNo = (struct No*)malloc(sizeof(struct No));
    novoNo->valor = valor;
    novoNo->proximo = *cabeca;
    *cabeca = novoNo;
}

void reverterLista(struct No** cabeca) {
    struct No* anterior = NULL;
    struct No* atual = *cabeca;
    struct No* proximo = NULL;
    while (atual != NULL) {
        proximo = atual->proximo;
        atual->proximo = anterior;
        anterior = atual;
        atual = proximo;
    }
    *cabeca = anterior;
}

void exibirLista(struct No* cabeca) {
    struct No* temp = cabeca;
    while (temp != NULL) {
        printf("%d -> ", temp->valor);
        temp = temp->proximo;
    }
    printf("NULL\n");
}

int main() {
    struct No* cabeca = NULL;
    inserirInicio(&cabeca, 10);
    inserirInicio(&cabeca, 20);
    inserirInicio(&cabeca, 30);
    exibirLista(cabeca);
    reverterLista(&cabeca);
    exibirLista(cabeca);
    return 0;
}
