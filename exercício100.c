#include <stdio.h>

#define MAX_N 10

int verificaQuadradoLatino(int matriz[MAX_N][MAX_N], int N) {

    for (int i = 0; i < N; i++) {
        int presente[MAX_N + 1] = {0}; 

        for (int j = 0; j < N; j++) {
            int elemento = matriz[i][j];

            if (elemento < 1 || elemento > N || presente[elemento] == 1) {
                return 0; 
            }

            presente[elemento] = 1;  
        }
    }

    for (int j = 0; j < N; j++) {
        int presente[MAX_N + 1] = {0}; 

        for (int i = 0; i < N; i++) {
            int elemento = matriz[i][j];

            if (elemento < 1 || elemento > N || presente[elemento] == 1) {
                return 0; 
            }

            presente[elemento] = 1; 
        }
    }

    return 1; 
}

int main() {
    int N;

    printf("Digite a ordem do Quadrado Latino (N <= %d): ", MAX_N);
    scanf("%d", &N);

    if (N <= 0 || N > MAX_N) {
        printf("Ordem inválida. Digite um valor válido.\n");
        return 1;
    }

    int matriz[MAX_N][MAX_N];
    printf("Digite os elementos da matriz %dx%d:\n", N, N);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    if (verificaQuadradoLatino(matriz, N)) {
        printf("A matriz é um Quadrado Latino de ordem %d.\n", N);
    } else {
        printf("A matriz NÃO é um Quadrado Latino de ordem %d.\n", N);
    }

    return 0;
}
