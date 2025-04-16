#include <stdio.h>
#include <stdlib.h>

struct No {
    int valor;
    struct No* proximo;
};

void inserirOrdenado(struct No** cabeca, int valor) {
    struct No* novoNo = (struct No*)malloc(sizeof(struct No));
    novoNo->valor = valor;

    if (*cabeca == NULL || (*cabeca)->valor >= valor) {
        novoNo->proximo = *cabeca;
        *cabeca = novoNo;
        return;
    }

    struct No* temp = *cabeca;
    while (temp->proximo != NULL && temp->proximo->valor < valor) {
        temp = temp->proximo;
    }
    novoNo->proximo = temp->proximo;
    temp->proximo = novoNo;
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
    inserirOrdenado(&cabeca, 20);
    inserirOrdenado(&cabeca, 10);
    inserirOrdenado(&cabeca, 30);
    exibirLista(cabeca);
    return 0;
}
