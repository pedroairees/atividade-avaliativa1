#include <stdio.h>
#include <string.h>

int main() {
    int num_cidades;
    printf("Digite o número de cidades: ");
    scanf("%d", &num_cidades);

    char cidade_com_maior_indice[50];
    char cidade_com_menor_indice[50];
    double maior_indice = -1.0;
    double menor_indice = -1.0;
    double total_veiculos = 0.0;
    double total_acidentes_rs = 0.0;
    int total_cidades_rs = 0;

    for (int i = 0; i < num_cidades; i++) {
        int codigo;
        char estado[3];
        double veiculos, acidentes;

        printf("Digite o código da cidade: ");
        scanf("%d", &codigo);

        printf("Digite o estado da cidade (RS, SC, PR, SP, RJ, ...): ");
        scanf("%s", estado);

        printf("Digite o número de veículos de passeio em 1992: ");
        scanf("%lf", &veiculos);

        printf("Digite o número de acidentes de trânsito com vítimas em 1992: ");
        scanf("%lf", &acidentes);

        total_veiculos += veiculos;

        if (strcmp(estado, "RS") == 0) {
            total_acidentes_rs += acidentes;
            total_cidades_rs++;
        }

        double indice = acidentes / veiculos;

        if (maior_indice == -1.0 || indice > maior_indice) {
            maior_indice = indice;
            strcpy(cidade_com_maior_indice, estado);
        }

        if (menor_indice == -1.0 || indice < menor_indice) {
            menor_indice = indice;
            strcpy(cidade_com_menor_indice, estado);
        }
    }

    printf("Maior índice de acidentes: %.2lf (Cidade: %s)\n", maior_indice, cidade_com_maior_indice);
    printf("Menor índice de acidentes: %.2lf (Cidade: %s)\n", menor_indice, cidade_com_menor_indice);
    printf("Média de veículos nas cidades brasileiras: %.2lf\n", total_veiculos / num_cidades);

    if (total_cidades_rs > 0) {
        printf("Média de acidentes com vítimas nas cidades do Rio Grande do Sul: %.2lf\n", total_acidentes_rs / total_cidades_rs);
    } else {
        printf("Nenhuma cidade do Rio Grande do Sul encontrada.\n");
    }

}