#include <stdio.h>

struct Livro {
    char titulo[50];
    char autor[50];
    int ano;
};

void filtrarLivros(struct Livro livros[], int tamanho, int limite) {
    for (int i = 0; i < tamanho; i++) {
        if (livros[i].ano > limite) {
            printf("\n%s (%s) - %d\n", livros[i].titulo, livros[i].autor, livros[i].ano);
        }
    }
}

int main() {
    int n, referencia;
    printf("Quantidade de livros: ");
    scanf("%d", &n);

    struct Livro livros[n];
    for (int i = 0; i < n; i++) {
        printf("\nLivro %d\n", i + 1);
        printf("Titulo: ");
        scanf(" %[^\n]", livros[i].titulo);
        printf("Autor: ");
        scanf(" %[^\n]", livros[i].autor);
        printf("Ano: ");
        scanf("%d", &livros[i].ano);
    }

    printf("Filtrar livros apos o ano: ");
    scanf("%d", &referencia);

    filtrarLivros(livros, n, referencia);
    return 0;
}
