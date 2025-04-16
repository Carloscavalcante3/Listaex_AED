#include <stdio.h>

struct Pessoa {
    char nome[50];
    int idade;
    float altura;
};

int main() {
    struct Pessoa pessoa1;
    printf("Digite o nome: ");
    fgets(pessoa1.nome, sizeof(pessoa1.nome), stdin);
    printf("Digite a idade: ");
    scanf("%d", &pessoa1.idade);
    printf("Digite a altura: ");
    scanf("%f", &pessoa1.altura);

    printf("Nome: %s", pessoa1.nome);
    printf("Idade: %d anos\n", pessoa1.idade);
    printf("Altura: %.2f m\n", pessoa1.altura);
    return 0;
}