/* Dado tr√™s valores, A, B e C, construa um algoritmo para verificar se estes valores podem ser valores dos lados de um tri√¢ngulo, e se for, se √© um triangulo escaleno, um triangulo equil√°tero ou um triangulo is√≥sceles. */

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
            printf("\nEste È um tiangulo equilatero!");
        } else if (a == b || a == c || b == c) {
            printf("\n Este È um triangulo esÛceles!");
        } else {
            printf("\nEste È um triangulo escaleno!");
        }
    } else {
        printf("\nEstes valores informados n„o formam um tri‚mngulo!");
    }
}