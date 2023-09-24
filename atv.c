/* Criar um algoritmo que receba o valor de x, e calcule e imprima o valor de f(x). */

#include <stdio.h>
#include <math.h>
#include <locale.h>

double calcular_x(double x) {
    double elevado = 2;
    return (5 * x) + 3 / sqrt(pow(x, elevado) - 16);
}

int main() {

    setlocale(LC_ALL, "Portuguese_Brazil");

    double x, resultado;
    printf("Digite o valor de x: ");
    scanf("%lf", &x);

    resultado = calcular_x(x);

    printf("\nO valor de f(%.2lf) da função, é: %.2lf\n", x, resultado);
}