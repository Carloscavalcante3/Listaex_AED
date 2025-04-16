#include <stdio.h>

struct Aluno {
    char nome[50];
    int matricula;
    float nota;
};

int main() {
    struct Aluno turma[5];
    float soma = 0.0;

    for (int i = 0; i < 5; i++) {
        printf("\nAluno %d:\n", i + 1);
        printf("Nome: ");
        scanf(" %[^\n]", turma[i].nome);
        printf("Matricula: ");
        scanf("%d", &turma[i].matricula);
        printf("Nota: ");
        scanf("%f", &turma[i].nota);
        soma += turma[i].nota;
    }

    printf("\nMedia da turma: %.2f\n", soma / 5);
    return 0;
}
