#include <stdio.h>

int maiorElemento(int vet[], int n) {
    if (n == 1) {
        return vet[0];
    }
    int maior = maiorElemento(vet, n - 1);
    return (vet[n - 1] > maior) ? vet[n - 1] : maior;
}

int main() {
    int vet[] = {3, 8, 1, 5, 2};
    int n = 5;
    printf("%d\n", maiorElemento(vet, n));
    return 0;
}
