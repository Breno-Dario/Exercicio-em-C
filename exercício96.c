#include <stdio.h>

#define LINHAS 3
#define COLUNAS 4

void somarMatrizes(int matriz1[LINHAS][COLUNAS], int matriz2[LINHAS][COLUNAS], int matrizSoma[LINHAS][COLUNAS]) {
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            matrizSoma[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
}

void subtrairMatrizes(int matriz1[LINHAS][COLUNAS], int matriz2[LINHAS][COLUNAS], int matrizDiferenca[LINHAS][COLUNAS]) {
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            matrizDiferenca[i][j] = matriz1[i][j] - matriz2[i][j];
        }
    }
}

void imprimirMatriz(int matriz[LINHAS][COLUNAS]) {
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main() {
    int matriz1[LINHAS][COLUNAS];
    int matriz2[LINHAS][COLUNAS];
    int matrizSoma[LINHAS][COLUNAS];
    int matrizDiferenca[LINHAS][COLUNAS];

    printf("Digite a primeira matriz %dx%d:\n", LINHAS, COLUNAS);
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            scanf("%d", &matriz1[i][j]);
        }
    }

    printf("Digite a segunda matriz %dx%d:\n", LINHAS, COLUNAS);
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            scanf("%d", &matriz2[i][j]);
        }
    }

    somarMatrizes(matriz1, matriz2, matrizSoma);
    subtrairMatrizes(matriz1, matriz2, matrizDiferenca);

    printf("Matriz 1:\n");
    imprimirMatriz(matriz1);

    printf("Matriz 2:\n");
    imprimirMatriz(matriz2);

    printf("Matriz Soma:\n");
    imprimirMatriz(matrizSoma);

    printf("Matriz Diferença:\n");
    imprimirMatriz(matrizDiferenca);

    return 0;
}
