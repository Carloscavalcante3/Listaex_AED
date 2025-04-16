#include <stdio.h>
#include <string.h>

struct Contato {
    char nome[50];
    char fone[15];
};

int main() {
    struct Contato agenda[100];
    int count = 0, escolha;
    char nomeBusca[50];

    while (1) {
        printf("\n1-Adicionar\n2-Buscar\n0-Sair\nOpcao: ");
        scanf("%d", &escolha);

        if (escolha == 0) break;
        if (escolha == 1) {
            printf("Nome: ");
            scanf(" %[^\n]", agenda[count].nome);
            printf("Telefone: ");
            scanf(" %[^\n]", agenda[count].fone);
            count++;
        } else if (escolha == 2) {
            printf("Buscar por nome: ");
            scanf(" %[^\n]", nomeBusca);
            for (int i = 0; i < count; i++) {
                if (strcmp(agenda[i].nome, nomeBusca) == 0) {
                    printf("Telefone encontrado: %s\n", agenda[i].fone);
                }
            }
        }
    }

    return 0;
}
