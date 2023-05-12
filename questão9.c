/*09. Faça um programa que receba um número inteiro. Verifique se esse número é primo ou não e imprima essa informação.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

int numero;
    int ehPrimo = 1; // Variável para armazenar se o número é primo ou não

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    // Verifica se o número é divisível por algum número além de 1 e ele mesmo
    for (int i = 2; i <= numero / 2; i++) {
        if (numero % i == 0) {
            ehPrimo = 0;
            break;
        }
    }

    if (ehPrimo == 1) {
        printf("%d e um numero primo.\n", numero);
    } else {
        printf("%d não e um numero primo.\n", numero);
    }

    return 0;
}