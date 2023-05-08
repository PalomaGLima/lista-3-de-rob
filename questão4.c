/*04. Faça um programa que receba um número n de alunos. Receba a nota de n alunos. Ao final do programa imprima a maior e a menor nota.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int n, i;
    float nota, maiorNota = -1, menorNota = 11;

    printf("Digite a quantidade de alunos: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("Digite a nota do aluno %d: ", i);
        scanf("%f", &nota);

        if (nota > maiorNota) {
            maiorNota = nota;
        }

        if (nota < menorNota) {
            menorNota = nota;
        }
    }

    printf("A maior nota e %.2f e a menor nota e %.2f.\n", maiorNota, menorNota);

    return 0;
}
