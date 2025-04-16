#include <stdio.h>

int produtoIterativo(int a, int b) {
    int resultado = 0;
    for (int i = 0; i < b; i++) {
        resultado += a;
    }
    return resultado;
}

int main() {
    int a = 5, b = 3;
    printf("Produto: %d\n", produtoIterativo(a, b));
    return 0;
}
