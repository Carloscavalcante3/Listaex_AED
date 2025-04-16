#include <stdio.h>
#include <stdlib.h>

struct Carro {
    char modelo[30];
    int ano;
    float valor;
};

int main() {
    struct Carro *veiculo = malloc(sizeof(struct Carro));
    if (!veiculo) return 1;

    printf("Modelo: ");
    scanf(" %[^\n]", veiculo->modelo);
    printf("Ano: ");
    scanf("%d", &veiculo->ano);
    printf("Preco: ");
    scanf("%f", &veiculo->valor);

    printf("\n%s - %d\nR$ %.2f\n", veiculo->modelo, veiculo->ano, veiculo->valor);
    free(veiculo);
    return 0;
}
