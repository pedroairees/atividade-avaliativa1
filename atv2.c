/* . . Chico tem 1,50 metro e cresce 2 centímetros por ano, enquanto Zé tem 1,10 metro e cresce 3 centímetros por ano. Construa um algoritmo que calcule e imprima quantos anos serão necessários para que Zé seja maior que Chico.  */

#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese_Brazil");

    float altura_chico = 150;
    float altura_ze = 110;
    int anos = 0;

    while(altura_ze <= altura_chico) {
        altura_chico += 2;
        altura_ze += 3;
        anos++;
    }

    printf("Serão necessario %d para que Zé seja maior que Chico!\n", anos);

}