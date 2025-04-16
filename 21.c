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

void inserirFim(struct No** cabeca, int valor) {
    struct No* novoNo = (struct No*)malloc(sizeof(struct No));
    struct No* temp = *cabeca;
    novoNo->valor = valor;
    novoNo->proximo = NULL;
    
    if (*cabeca == NULL) {
        *cabeca = novoNo;
        return;
    }

    while (temp->proximo != NULL) {
        temp = temp->proximo;
    }
    temp->proximo = novoNo;
}

void removerElemento(struct No** cabeca, int valor) {
    struct No* temp = *cabeca;
    struct No* anterior = NULL;

    if (temp != NULL && temp->valor == valor)
