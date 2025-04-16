#include <stdio.h>

int somaDigitosIterativa(int n) {
    int soma = 0;
    while (n > 0) {
        soma += n % 10;
        n /= 10;
    }
    return soma;
}

int main() {
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    printf("Soma:%d\n", somaDigitosIterativa(numero));
    return 0;
}
