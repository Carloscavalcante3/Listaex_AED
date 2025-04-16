#include <stdio.h>
#include <string.h>

int palindromo(char palavra[], int inicio, int fim) {
    if (inicio >= fim) {
        return 1;
    }
    if (palavra[inicio] != palavra[fim]) {
        return 0;
    }
    return palindromo(palavra, inicio + 1, fim - 1);
}

int main() {
    char palavra[50]; 
    scanf("%s", palavra);
    int len = strlen(palavra);
    printf("%d\n", palindromo(palavra, 0, len - 1));
    return 0;
}