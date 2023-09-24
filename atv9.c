#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    int voto, candidato1 = 0, candidato2 = 0, candidato3 = 0, candidato4 = 0, nulo = 0, branco = 0;

    printf("Bem vindo a votação!\n");
    printf("\n1 - Bolsonaro");
    printf("       2 - Lula");
    printf("\n3 - Aecio Neves");
    printf("       4 - Marina Silva");
    printf("\n5 - Nulo");
    printf("       6 - Em-Branco\n");
    printf("\n\nFaça sua votação: ");
    scanf("%d", &voto);

    while(voto != 0){
        switch(voto) {
            case 1:
                candidato1++;
                break;
            case 2:
                candidato2++;
                break;
            case 3: 
                candidato3++;
                break;
            case 4:
                candidato4++;
                break;
            case 5:
                nulo++;
                break;
            case 6:
                branco++;
                break;
            default:
                printf("Codigo invalido!");
                break;
        }

        printf("Informe o código do candidato (0 para encerrar): ");
        scanf("%d", &voto);
    }

    printf("Total de votos para o Bolsonaro: %d\n", candidato1);
    printf("Total de votos para o Lula: %d\n", candidato2);
    printf("Total de votos para o Aecio Neves: %d\n", candidato3);
    printf("Total de votos para o Marina Silva: %d\n", candidato4);
    printf("Total de votos nulos: %d\n", nulo);
    printf("Total de votos em branco: %d\n", branco);
}