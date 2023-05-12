/*12. Faça um programa que receba um número inteiro n. Depois, receba um conjunto de dados de n pessoas, contendo: altura e sexo. Por fim, imprima: a maior e menor altura do grupo; a média de altura das mulheres; o número de homens; e a diferença percentual entre estes e as mulheres.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX_PESSOAS 100

int main() {
    int n;
    printf("Digite o numero de pessoas: ");
    scanf("%d", &n);

    float altura[MAX_PESSOAS];
    char sexo[MAX_PESSOAS];

    printf("Digite os dados de cada pessoa:\n");
    for (int i = 0; i < n; i++) {
        printf("Pessoa %d\n", i + 1);
        printf("Altura: ");
        scanf("%f", &altura[i]);
        printf("Sexo (M/F): ");
        scanf(" %c", &sexo[i]);
    }

    // Inicialização das variáveis
    float maiorAltura = altura[0];
    float menorAltura = altura[0];
    float somaAlturaMulheres = 0;
    int contadorMulheres = 0;
    int contadorHomens = 0;

    // Cálculos das estatísticas
    for (int i = 0; i < n; i++) {
        if (altura[i] > maiorAltura) {
            maiorAltura = altura[i];
        }
        if (altura[i] < menorAltura) {
            menorAltura = altura[i];
        }
        if (sexo[i] == 'F') {
            somaAlturaMulheres += altura[i];
            contadorMulheres++;
        } else if (sexo[i] == 'M') {
            contadorHomens++;
        }
    }

    float mediaAlturaMulheres = somaAlturaMulheres / contadorMulheres;
    float diferencaPercentual = (float)(contadorHomens - contadorMulheres) / contadorMulheres * 100;

    // Impressão dos resultados
    printf("\nEstatisticas do grupo:\n");
    printf("Maior altura: %.2f\n", maiorAltura);
    printf("Menor altura: %.2f\n", menorAltura);
    printf("Media de altura das mulheres: %.2f\n", mediaAlturaMulheres);
    printf("Numero de homens: %d\n", contadorHomens);
    printf("Diferença percentual entre homens e mulheres: %.2f%%\n", diferencaPercentual);

    return 0;
}