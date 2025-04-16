#include <stdio.h>

struct Paciente {
    char nome[50];
    int idade;
    char diagnostico[100];
};

void mostrar_idosos(struct Paciente lista[], int total) {
    for (int i = 0; i < total; i++) {
        if (lista[i].idade > 60) {
            printf("\n%s - %d anos\nDiagnostico: %s\n", lista[i].nome, lista[i].idade, lista[i].diagnostico);
        }
    }
}

int main() {
    int n;
    printf("Numero de pacientes: ");
    scanf("%d", &n);

    struct Paciente p[n];

    for (int i = 0; i < n; i++) {
        printf("\nPaciente %d\n", i + 1);
        printf("Nome: ");
        scanf(" %[^\n]", p[i].nome);
        printf("Idade: ");
        scanf("%d", &p[i].idade);
        printf("Diagnostico: ");
        scanf(" %[^\n]", p[i].diagnostico);
    }

    mostrar_idosos(p, n);
    return 0;
}