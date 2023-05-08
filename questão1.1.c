/*01. Faça um programa que receba um número n e imprima os inteiros positivos antes dele.*/

#include <stdio.h>

int main() {
    int n, i;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);

    printf("Os %d primeiros inteiros positivos são: ", n);
    for (i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}