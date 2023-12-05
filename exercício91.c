#include <stdio.h>

int main() {
    int matrizA[5][5];
    int somaLinhas[5] = {0};  
    int somaColunas[5] = {0}; 

    printf("Digite os elementos da matriz A (5x5):\n");
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            printf("MatrizA[%d][%d]: ", i, j);
            scanf("%d", &matrizA[i][j]);

            somaLinhas[i] += matrizA[i][j];
            somaColunas[j] += matrizA[i][j];
        }
    }

    printf("\nMatriz A:\n");
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            printf("%d\t", matrizA[i][j]);
        }
        printf("\n");
    }

    printf("\nVetor somaLinhas:\n");
    for (int i = 0; i < 5; ++i) {
        printf("%d\t", somaLinhas[i]);
    }

    printf("\nVetor somaColunas:\n");
    for (int j = 0; j < 5; ++j) {
        printf("%d\t", somaColunas[j]);
    }

    return 0;
}
