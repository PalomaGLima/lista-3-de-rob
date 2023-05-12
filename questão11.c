/*11. Faça um programa que receba um inteiro n. Digite depois uma sequência com n inteiros. Por fim, imprima a quantidade de segmentos de números consecutivos iguais. Exemplo: a seguinte sequência com 10 números (5, 2, 2, 3, 4, 4, 4, 4, 1, 1) é formada por 5 segmentos.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int n;
    printf("Digite a quantidade de números na sequência: ");
    scanf("%d", &n);

    int sequencia[n];
    printf("Digite a sequência de números:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &sequencia[i]);
    }

    int segmentos = 0;
    int i = 0;
    while (i < n) {
        int atual = sequencia[i];
        int j = i + 1;

        while (j < n && sequencia[j] == atual) {
            j++;
        }

        if (j - i > 1) {
            segmentos++;
        }

        i = j;
    }

    printf("A sequência possui %d segmentos de números consecutivos iguais.\n", segmentos);

    return 0;
}