#include <stdio.h>

int main() {
    double salario, media_salario, media_filhos, maior_salario;
    int num_filhos, total_pessoas, pessoas_ate_100;

    salario = media_salario = media_filhos = maior_salario = 0.0;
    num_filhos = total_pessoas = pessoas_ate_100 =0;

    do {
        printf("Digite o salario (ou valor negativo para sair): ");
        scanf("%lf", &salario);

        if(salario >= 0) {
            printf("Digite o numero de filhos: ");
            scanf("%d", &num_filhos);

            total_pessoas++;
            media_salario += salario;
            media_filhos += num_filhos;

            if(salario > maior_salario) {
                maior_salario = salario;
            }
            if(salario <= 100.0) {
                pessoas_ate_100++;
            }
        }
    } while (salario >= 0);

    if (total_pessoas > 0) {
        media_salario /= total_pessoas;
        media_filhos /= total_pessoas;

        double percentual_ate_100 = (double)pessoas_ate_100 / total_pessoas * 100.0;

        printf("Media do salario da população: %.2lf\n", media_salario);
        printf("Media do numero de filhos: %.2lf\n", media_filhos);
        printf("Maior slaario: %.2lf\n", maior_salario);
        printf("Percentual de pessoas com salario ate R$100,00: %.2lf\n", percentual_ate_100);
    } else {
        printf("Nenhum dado foi inserido.\n");
    }
}