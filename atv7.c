#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    int num_alunos = 30;
    double notas[num_alunos];
    double media_geral = 0.0;

    for (int i = 0; i < num_alunos; i++) {
        double n1, n2, n3;
        printf("Informe as ntoas do aluno %d (n1 n2 n3): ", i + 1);
        scanf("%lf %lf %lf", &n1, &n2, &n3);

        double media_ponderada = (n1 * 2 + n2 * 4 + n3 * 3) / 10;
        notas[i] = media_ponderada;
        media_geral += media_ponderada;

        if (media_ponderada >= 7.0) {
            printf("Aluno %d: %.2lf - Aprovado\n", i + 1, media_ponderada);
        } else {
            printf("Aluno %d: %.2lf - Reprovado\n", i + 1, media_ponderada);
        }
    }

    media_geral /= num_alunos;
    printf("Media Geral da Turma: %.2lf\n", media_geral);
}