#include <stdio.h>

#define LINHAS1 4
#define COLUNAS1 3
#define LINHAS2 3
#define COLUNAS2 2

void multiplicarMatrizes(int matriz1[LINHAS1][COLUNAS1], int matriz2[LINHAS2][COLUNAS2], int resultado[LINHAS1][COLUNAS2]) {
    for (int i = 0; i < LINHAS1; i++) {
        for (int j = 0; j < COLUNAS2; j++) {
            resultado[i][j] = 0;
            for (int k = 0; k < LINHAS2; k++) {
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }
}

void imprimirMatriz(int matriz[LINHAS1][COLUNAS2]) {
    for (int i = 0; i < LINHAS1; i++) {
        for (int j = 0; j < COLUNAS2; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matriz1[LINHAS1][COLUNAS1];
    int matriz2[LINHAS2][COLUNAS2];
    int resultado[LINHAS1][COLUNAS2];

    printf("Digite a primeira matriz %dx%d:\n", LINHAS1, COLUNAS1);
    for (int i = 0; i < LINHAS1; i++) {
        for (int j = 0; j < COLUNAS1; j++) {
            scanf("%d", &matriz1[i][j]);
        }
    }

    printf("Digite a segunda matriz %dx%d:\n", LINHAS2, COLUNAS2);
    for (int i = 0; i < LINHAS2; i++) {
        for (int j = 0; j < COLUNAS2; j++) {
            scanf("%d", &matriz2[i][j]);
        }
    }

    multiplicarMatrizes(matriz1, matriz2, resultado);

    printf("\nMatriz resultante do produto:\n");
    imprimirMatriz(resultado);

    return 0;
}
