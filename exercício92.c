#include <stdio.h>

int main() {
    int matriz[5][5];
    int simetrica = 1;
    
    printf("Digite os elementos da matriz (5x5):\n");
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            printf("Matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            if (matriz[i][j] != matriz[j][i]) {
                simetrica = 0; 
                break;
            }
        }
        if (!simetrica) {
            break;
        }
    }

    printf("\nMatriz inserida:\n");
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    if (simetrica) {
        printf("\nA matriz é simétrica.\n");
    } else {
        printf("\nA matriz não é simétrica.\n");
    }

    return 0;
}
