/*10. Faça um programa que receba a quantidade de discos vendidos em uma loja durante cada dia do mês de Abril. Imprima qual o dia que ocorreu a maior venda do mês e qual foi a quantidade de discos vendidos.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MESES 30

int main() {
    int vendas[MESES];
    int maiorVenda = 0;
    int diaMaiorVenda = 0;

    printf("Digite a quantidade de discos vendidos em cada dia do mês de Abril:\n");

    // Recebe as vendas de cada dia do mês
    for (int dia = 0; dia < MESES; dia++) {
        printf("Dia %d: ", dia + 1);
        scanf("%d", &vendas[dia]);

        // Verifica se a venda atual é maior que a maior venda registrada até o momento
        if (vendas[dia] > maiorVenda) {
            maiorVenda = vendas[dia];
            diaMaiorVenda = dia + 1;
        }
    }

    printf("\nO dia com maior venda no mes de Abril foi o dia %d, com %d discos vendidos.\n", diaMaiorVenda, maiorVenda);

    return 0;
}