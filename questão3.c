/*03. Faça um programa que receba um número n e imprima os n primeiros números impares.*/

#include <stdio.h>

int main() {
    int n, i, count;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    printf("Os %d primeiros numeros impares sao:\n", n);

    count = 0;
    for (i = 1; count < n; i += 2) {
        printf("%d ", i);
        count++;
    }

    printf("\n");

    return 0;
}