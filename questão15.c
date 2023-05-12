/*15. Faça um programa que receba dois números inteiros, sendo que o primeiro possui menos casas que o segundo. Depois verifique se o primeiro número é subnúmero do segundo. Exemplos: 23 é subnúmero de 57238; 23 não é subnúmero de 258347.*/

#include <stdio.h>

int ehSubnumero(int primeiro, int segundo) {
    // Converte os números para strings
    char strPrimeiro[20];
    char strSegundo[20];
    sprintf(strPrimeiro, "%d", primeiro);
    sprintf(strSegundo, "%d", segundo);

    // Verifica se o primeiro número é subnúmero do segundo
    int i = 0;
    int j = 0;
    while (strPrimeiro[i] != '\0' && strSegundo[j] != '\0') {
        if (strPrimeiro[i] == strSegundo[j]) {
            i++;
        }
        j++;
    }

    // Se o primeiro número chegou ao fim, é subnúmero
    return strPrimeiro[i] == '\0';
}

int main() {
    int primeiro, segundo;

    printf("Digite o primeiro número: ");
    scanf("%d", &primeiro);
    printf("Digite o segundo número: ");
    scanf("%d", &segundo);

    if (ehSubnumero(primeiro, segundo)) {
        printf("%d é subnúmero de %d.\n", primeiro, segundo);
    } else {
        printf("%d não é subnúmero de %d.\n", primeiro, segundo);
    }

    return 0;
}
