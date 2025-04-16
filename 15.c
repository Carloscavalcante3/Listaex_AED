#include <stdio.h>

void contagemRegressiva(int n) {
    if (n < 0) {
        return;
    }
    printf("%d ", n);
    contagemRegressiva(n - 1);
}

int main() {
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    printf("Contagem regressiva: ");
    contagemRegressiva(numero);
    return 0;
}
