#include <stdio.h>

struct Conta {
    char nomeTitular[50];
    int numero;
    float saldo;
};

void depositar(struct Conta *conta, float valor) {
    conta->saldo += valor;
}

void sacar(struct Conta *conta, float valor) {
    if (valor <= conta->saldo) {
        conta->saldo -= valor;
    }
}

void exibir_saldo(struct Conta conta) {
    printf("Saldo atual: R$ %.2f\n", conta.saldo);
}

int main() {
    struct Conta c;
    int opcao;
    float valor;

    printf("Nome do titular: ");
    scanf(" %[^\n]", c.nomeTitular);
    printf("Numero da conta: ");
    scanf("%d", &c.numero);
    c.saldo = 0.0;

    do {
        printf("\n1-Deposito\n2-Saque\n3-Saldo\n0-Sair\nEscolha: ");
        scanf("%d", &opcao);
        switch (opcao) {
            case 1:
                printf("Valor para depositar: ");
                scanf("%f", &valor);
                depositar(&c, valor);
                break;
            case 2:
                printf("Valor para sacar: ");
                scanf("%f", &valor);
                sacar(&c, valor);
                break;
            case 3:
                exibir_saldo(c);
                break;
        }
    } while (opcao != 0);

    return 0;
}
