#include <stdio.h>

#define N 100 

void calcularFrequencia(int matrizIdades[N][2], int frequencia[13][13]) {
    for (int i = 0; i < N && matrizIdades[i][0] != -1 && matrizIdades[i][1] != -1; i++) {
        int idadeHomem = matrizIdades[i][0];
        int idadeMulher = matrizIdades[i][1];

        if (idadeHomem >= 18 && idadeHomem <= 30 && idadeMulher >= 18 && idadeMulher <= 30) {
            frequencia[idadeHomem - 18][idadeMulher - 18]++;
        }
    }
}

void encontrarMaisFrequentes(int frequencia[13][13], int *maisFreqHomem, int *maisFreqMulher) {
    int maxFrequencia = 0;

    for (int i = 0; i < 13; i++) {
        for (int j = 0; j < 13; j++) {
            if (frequencia[i][j] > maxFrequencia) {
                maxFrequencia = frequencia[i][j];
                *maisFreqHomem = i + 18;
                *maisFreqMulher = j + 18;
            }
        }
    }
}

int main() {
    int matrizIdades[N][2];
    int frequencia[13][13] = {0}; 
    int maisFreqHomem, maisFreqMulher;
    
    printf("Digite as idades do homem e da mulher no casamento (digite -1 para encerrar):\n");

    int i;
    for (i = 0; i < N; i++) {
        printf("Casamento %d: ", i + 1);
        scanf("%d %d", &matrizIdades[i][0], &matrizIdades[i][1]);

        if (matrizIdades[i][0] == -1 || matrizIdades[i][1] == -1) {
            break; 
        }
    }

    calcularFrequencia(matrizIdades, frequencia);

    encontrarMaisFrequentes(frequencia, &maisFreqHomem, &maisFreqMulher);

    printf("\n(1) Idade mais frequente de casamento dos homens: %d\n", maisFreqHomem);
    printf("(2) Idade mais frequente de casamento das mulheres: %d\n", maisFreqMulher);
    printf("(3) Combinação mais frequente de idades de casamento: %d (homem) e %d (mulher)\n", maisFreqHomem, maisFreqMulher);

    return 0;
}
