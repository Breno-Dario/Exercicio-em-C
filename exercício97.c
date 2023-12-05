#include <stdio.h>

#define TAMANHO 5

void imprimirMatriz(int matriz[TAMANHO][TAMANHO]) {
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void trocarLinhas(int matriz[TAMANHO][TAMANHO], int x, int y) {
    int temp[TAMANHO];
    for (int i = 0; i < TAMANHO; i++) {
        temp[i] = matriz[x][i];
        matriz[x][i] = matriz[y][i];
        matriz[y][i] = temp[i];
    }
}

void trocarColunas(int matriz[TAMANHO][TAMANHO], int x, int y) {
    int temp[TAMANHO];
    for (int i = 0; i < TAMANHO; i++) {
        temp[i] = matriz[i][x];
        matriz[i][x] = matriz[i][y];
        matriz[i][y] = temp[i];
    }
}

void trocarDiagonais(int matriz[TAMANHO][TAMANHO]) {
    int temp;
    for (int i = 0; i < TAMANHO; i++) {
        temp = matriz[i][i];
        matriz[i][i] = matriz[i][TAMANHO - 1 - i];
        matriz[i][TAMANHO - 1 - i] = temp;
    }
}

int main() {
    int matriz[TAMANHO][TAMANHO];
    int x, y;

    printf("Digite a matriz %dx%d:\n", TAMANHO, TAMANHO);
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Matriz original:\n");
    imprimirMatriz(matriz);

    printf("Digite dois números x e y: ");
    scanf("%d %d", &x, &y);

    trocarLinhas(matriz, x, y);
    trocarColunas(matriz, x, y);
    trocarDiagonais(matriz);

    printf("Matriz modificada:\n");
    imprimirMatriz(matriz);

    return 0;
}
