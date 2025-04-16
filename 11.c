#include <stdio.h>

int contarDigitos(int n) {
    if (n == 0) {
        return 0;
    }
    return 1 + contarDigitos(n / 10);
}

int main() {
    int numero;
    scanf("%d", &numero);
    printf("Dígitos: %d\n", contarDigitos(numero));
    return 0;
}