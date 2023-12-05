#include <stdio.h>

int main() {
    int matrizD[5][5];
    int somaDiagonalPrincipal = 0;
    int somaDiagonalSecundaria = 0;

    printf("Digite os elementos da matriz D (5x5):\n");
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            printf("MatrizD[%d][%d]: ", i, j);
            scanf("%d", &matrizD[i][j]);

            if (i == j) {
                somaDiagonalPrincipal += matrizD[i][j];
            }

            if (i + j == 4) {
                somaDiagonalSecundaria += matrizD[i][j];
            }
        }
    }

    printf("\nMatriz D inserida:\n");
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            printf("%d\t", matrizD[i][j]);
        }
        printf("\n");
    }

    printf("\nSoma da diagonal principal: %d\n", somaDiagonalPrincipal);
    printf("Soma da diagonal secundária: %d\n", somaDiagonalSecundaria);

    return 0;
}
