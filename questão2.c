/*02. Faça um programa que receba um número inteiro por vez e imprima seu quadrado até que o usuário digite o valor zero.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int n;

do
{
    printf("digite um numero:\n");
    scanf("%d",&n);
    n=n*n;
    printf("%d\n",n);
} while (n!=0);


return 0;
}