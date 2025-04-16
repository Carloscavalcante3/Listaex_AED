#include <stdio.h>

struct Produto {
    char nome[30];
    int codigo;
    float preco;
};

void exibir(struct Produto item) {
    printf("\nDetalhes do Produto:\n");
    printf("Nome: %s\n", item.nome);
    printf("Codigo: %d\n", item.codigo);
    printf("Preco: R$ %.2f\n", item.preco);
}

int main() {
    struct Produto p;
    printf("Informe o nome do produto: ");
    scanf(" %[^\n]", p.nome);
    printf("Informe o codigo: ");
    scanf("%d", &p.codigo);
    printf("Informe o preco: ");
    scanf("%f", &p.preco);
    exibir(p);
    return 0;
}
