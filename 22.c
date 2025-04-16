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

int contarElementos(struct No* cabeca) {
    int contador = 0;
    struct No* temp = cabeca;
    while (temp != NULL) {
        contador++;
        temp = temp->proximo;
    }
    return contador;
}

int main() {
    struct No* cabeca = NULL;
    inserirInicio(&cabeca, 10);
    inserirInicio(&cabeca, 20);
    printf("Total de elementos: %d\n", contarElementos(cabeca));
    return 0;
}
