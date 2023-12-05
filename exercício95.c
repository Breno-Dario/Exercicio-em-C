    #include <stdio.h>

#define LINHAS 6
#define COLUNAS 6
#define TAMANHO_VETOR (LINHAS * COLUNAS)

void linearizarMatriz(int matriz[LINHAS][COLUNAS], int vetor[TAMANHO_VETOR]) {
    int indice = 0;

    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            vetor[indice] = matriz[i][j];
            indice++;
        }
    }
}

void imprimirVetor(int vetor[TAMANHO_VETOR]) {
    for (int i = 0; i < TAMANHO_VETOR; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

int main() {
    int matriz[LINHAS][COLUNAS];
    int vetor[TAMANHO_VETOR];

    printf("Digite a matriz %dx%d:\n", LINHAS, COLUNAS);
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    linearizarMatriz(matriz, vetor);

    printf("\nVetor resultante:\n");
    imprimirVetor(vetor);

    return 0;
}
