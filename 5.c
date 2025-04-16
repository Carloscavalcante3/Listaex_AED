#include <stdio.h>

struct Funcionario {
    char nome[50];
    char funcao[30];
    float salario;
};

int main() {
    int qtd;
    printf("Total de funcionarios: ");
    scanf("%d", &qtd);

    struct Funcionario lista[qtd];

    for (int i = 0; i < qtd; i++) {
        printf("\nFuncionario %d\n", i + 1);
        printf("Nome: ");
        scanf(" %[^\n]", lista[i].nome);
        printf("Cargo: ");
        scanf(" %[^\n]", lista[i].funcao);
        printf("Salario: ");
        scanf("%f", &lista[i].salario);
    }

    for (int i = 0; i < qtd; i++) {
        printf("\n%s - %s\nSalario: R$ %.2f\n", lista[i].nome, lista[i].funcao, lista[i].salario);
    }

    return 0;
}
