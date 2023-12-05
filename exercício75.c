#include <stdio.h>

#define TAMANHO_ARRAY 15

void trocar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int array[], int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                trocar(&array[j], &array[j + 1]);
            }
        }
    }
}

void imprimirArray(int array[], int tamanho) {
    printf("Array ordenado: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    int array[TAMANHO_ARRAY];

    printf("Digite os elementos do array (%d elementos):\n", TAMANHO_ARRAY);
    for (int i = 0; i < TAMANHO_ARRAY; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    bubbleSort(array, TAMANHO_ARRAY);

    imprimirArray(array, TAMANHO_ARRAY);

    return 0;
}
