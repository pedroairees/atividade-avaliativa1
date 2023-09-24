/* . . Chico tem 1,50 metro e cresce 2 cent�metros por ano, enquanto Z� tem 1,10 metro e cresce 3 cent�metros por ano. Construa um algoritmo que calcule e imprima quantos anos ser�o necess�rios para que Z� seja maior que Chico.  */

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

    printf("Ser�o necessario %d para que Z� seja maior que Chico!\n", anos);

}