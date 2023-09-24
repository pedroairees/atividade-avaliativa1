 /* Dados três valores A, B e C, construa um algoritmo para verificar se estes valores podem ser valores dos lados de um triângulo, e se for classificá-los (imprimi-los) segundo os ângulos. (Triângulo Retângulo = 90º, Triângulo Obtusângulo > 90º, Triângulo Acutângulo < 90º) */
 
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    float a, b, c;

    printf("Digite o valor de A: ");
    scanf("%f", &a);
    printf("\nDigite o valor de B: ");
    scanf("%f", &b);
    printf("\nDigite o valor de C: ");
    scanf("%f", &c);

    if(a + b > c && a + c > b && b + c > a) {
        if(a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b *b){
            printf("\nTriangulo Retagunlo!");
        } else if (a * a > b * b + c * c || b * b > a * a + c * c || c * c > a * a + b * b){
            printf("\n Triangulo Obtusangulo!");
        } else {
            printf("\nTriangulo Actangulo!");
        }
    } else {
        printf("\nEsses valores nao formam uma triangulo");
    }

}