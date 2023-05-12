/*07. Faça um programa que receba dois números inteiros positivos e um número n. Imprima em ordem crescente os n primeiros naturais que são múltiplos de um dos dois primeiros inteiros digitados. Exemplo: 2 e 3 com n = 6 resultaria em 0, 2, 3, 4, 6, 8.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

 int num1, num2, n;
    printf("Digite dois numeros inteiros positivos: ");
    scanf("%d %d", &num1, &num2);
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    int count = 0; // Contador de números encontrados
    int i = 0; // Número atual a ser verificado

    printf("Os %d primeiros naturais multiplos de %d ou %d sao: ", n, num1, num2);
    while (count < n) {
        if (i % num1 == 0 || i % num2 == 0) {
            printf("%d ", i);
            count++;
        }
        i++;
    }

    printf("\n");

return 0;
}