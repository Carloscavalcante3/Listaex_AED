#include <stdio.h>

struct Retangulo {
    float base;
    float altura;
};

float calcular_area(struct Retangulo r) {
    return r.base * r.altura;
}

float calcular_perimetro(struct Retangulo r) {
    return 2 * (r.base + r.altura);
}

int main() {
    struct Retangulo ret;

    printf("Base: ");
    scanf("%f", &ret.base);
    printf("Altura: ");
    scanf("%f", &ret.altura);

    printf("Area: %.2f\n", calcular_area(ret));
    printf("Perimetro: %.2f\n", calcular_perimetro(ret));
    return 0;
}
