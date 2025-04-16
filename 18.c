#include <stdio.h>

int maiorElementoIterativo(int vet[], int n) {
    int maior = vet[0];
    for (int i = 1; i < n; i++) {
        if (vet[i] > maior) {
            maior = vet[i];
        }
    }
    return maior;
}

int main() {
    int vet[] = {3, 8, 1, 5, 2};
    int n = 5;
    printf("%d\n", maiorElementoIterativo(vet, n));
    return 0;
}
