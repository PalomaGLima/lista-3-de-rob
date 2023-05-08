/*01. Faça um programa que receba um número n e imprima os n primeiros inteiros positivos.*/

#include <stdio.h>

int main() {
    float n;

    do {
        printf("Digite um numero real:\n ");
        scanf("%f", &n);

        if (n <= 0 || n != (int)n) {
            printf("%.2f nao e um numero inteiro positivo.\n", n);
        } else {
            printf("%.0f e um numero inteiro positivo.\n", n);
        }

    } while (n > 0);

    printf("Programa encerrado.\n");

    return 0;
}