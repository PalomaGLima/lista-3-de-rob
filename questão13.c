/*13. Faça um programa que receba dois números e imprima o Máximo Divisor Comum (MDC).*/

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

int main() {
    int numero1, numero2;

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &numero1, &numero2);

    int mdc = calcularMDC(numero1, numero2);

    printf("O Maximo Divisor Comum (MDC) de %d e %d é: %d\n", numero1, numero2, mdc);

    return 0;
}