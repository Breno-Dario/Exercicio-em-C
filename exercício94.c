#include <stdio.h>

#define LINHAS 6
#define COLUNAS 6

void multiplicarMatriz(int matriz[LINHAS][COLUNAS], int valor) {
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            matriz[i][j] *= valor;
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
}

int main() {
    int matriz[LINHAS][COLUNAS];
    int valor;

    printf("Digite a matriz %dx%d:\n", LINHAS, COLUNAS);
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Digite um valor inteiro para multiplicar a matriz: ");
    scanf("%d", &valor);

    multiplicarMatriz(matriz, valor);

    printf("\nMatriz resultante:\n");
    imprimirMatriz(matriz);

    return 0;
}
