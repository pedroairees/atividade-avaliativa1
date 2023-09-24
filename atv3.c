/* Dado três valores, A, B e C, construa um algoritmo para verificar se estes valores podem ser valores dos lados de um triângulo, e se for, se é um triangulo escaleno, um triangulo equilátero ou um triangulo isósceles. */

#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese_Brazil");
    float a, b, c;

    printf("Digite o valor de A: ");
    scanf("%f", &a);

    printf("\nDigite o valor de B: ");
    scanf("%f", &b);

    printf("\nDigite o valor de c: ");
    scanf("%f", &c);

    if((a + b > c) && (a + c > b) && (b + c > a)) {
        if(a == b && b == c) {
            printf("\nEste � um tiangulo equilatero!");
        } else if (a == b || a == c || b == c) {
            printf("\n Este � um triangulo es�celes!");
        } else {
            printf("\nEste � um triangulo escaleno!");
        }
    } else {
        printf("\nEstes valores informados n�o formam um tri�mngulo!");
    }
}