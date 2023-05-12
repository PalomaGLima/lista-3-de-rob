/*08. Faça um programa que receba um número inteiro e diga se ele é triangular ou não. Um número natural é triangular se ele é produto de três números naturais consecutivos. Exemplo: 120 é triangular, pois 4x5x6 = 120.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int numero;
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    int produto = 1;
    int fator1 = 0, fator2 = 0, fator3 = 0;
    int i = 1;

    while (produto < numero) {
        fator1 = i;
        fator2 = i + 1;
        fator3 = i + 2;

        produto = fator1 * fator2 * fator3;

        if (produto == numero) {
            printf("%d e um numero triangular. (%d x %d x %d = %d)\n", numero, fator1, fator2, fator3, produto);
            return 0;
        }

        i++;
    }

    printf("%d não e um numero triangular.\n", numero);

    return 0;
}