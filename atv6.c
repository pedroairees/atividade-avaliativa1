#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    double x, y;

    printf("Digite as coordenadas do ponto (x y): ");
    scanf("%lf %lf", &x, &y);

    if(x == 0.0 && y == 0.0) {
        printf("Origem\n");
    } else if (x == 0.0) {
        printf("Eixo Y\n");
    } else if (y == 0.0) {
        pritnf("Eixo X\n");
    } else if (x > 0.0 && y > 0.0) {
        printf("Primeiro Quadrante\n");
    } else if (x < 0.0 && y > 0.0) {
        printf("Segundo Quadrante!\n");
    } else if (x < 0.0 && y < 0.0) {
        printf("Terceiro Quadrante!\n");
    } else {
        printf("Quarto Quadrante\n");
    }
}