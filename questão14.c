/*14. Faça um programa que receba dois números e imprima o Mínimo Múltiplo Comum (MMC).*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int calcularMDC(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return calcularMDC(b, a % b);
    }
}

int calcularMMC(int a, int b) {
    int mdc = calcularMDC(a, b);
    int mmc = (a * b) / mdc;
    return mmc;
}

int main() {
    int numero1, numero2;

    printf("Digite dois números inteiros: ");
    scanf("%d %d", &numero1, &numero2);

    int mmc = calcularMMC(numero1, numero2);

    printf("O Mínimo Múltiplo Comum (MMC) de %d e %d é: %d\n", numero1, numero2, mmc);

    return 0;
}