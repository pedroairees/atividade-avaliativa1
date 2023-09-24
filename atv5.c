#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
    double x1, y1, x2, y2;
    double distancia;

    printf("Digite as primeira cordenadas (x1, y1): ");
    scanf("%lf %lf", &x1, &y1);
    printf("\nDigite agora as segunda cordenadas (x2,y2): ");
    scanf("%lf %lf", &x2, &y2);

    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("\nA distancia entre os pontos (%.4lf, %.4lf) e (%.4lf, %.4lf) e: %.4lf\n", x1, y1, x2, y2, distancia);
}