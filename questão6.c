/*06. Faça um programa que receba um inteiro, valide-o como não negativo. Depois, calcule e imprima o fatorial deste número.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n,fat;

printf("digite um numero:\n");
scanf("%d", &n);

 if (n>0)
 {
    printf("nao negativo\n");
 }

 for (fat = 1; n >1; n=n-1) {
        fat = fat*n;
    }

   printf("\nFatorial calculado: %d", fat);


return 0;
}