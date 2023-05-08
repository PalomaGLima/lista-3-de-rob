/*05. Faça um programa que receba um número n e some os números pares de 0 até o número digitado.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int n,i,soma = 0;

printf("Digite um numero:\n");
scanf("%d", &n);


    for (i = 0; i <= n; i += 2) {
        soma += i;
    }

printf("A soma dos numeros pares ate %d e %d.\n", n, soma);

return 0;
}