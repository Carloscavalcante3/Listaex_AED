#include <stdio.h>

void contagemRegressivaIterativa(int n) {
    for (int i = n; i >= 0; i--) {
        printf("%d ", i);
    }
    printf("\n");
}

int main() {
    int numero;
    printf("Digite um número: ");
    scanf("%d", &numero);
    contagemRegressivaIterativa(numero);
    return 0;
}
