#include <stdio.h>

int produto(int a, int b) {
    if (b == 0) {
        return 0;
    }
    return a + produto(a, b - 1);
}

int main() {
    int a = 5, b = 3;
    printf("%d\n", produto(a, b));
    return 0;
}
