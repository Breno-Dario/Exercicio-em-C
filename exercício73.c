#include <stdio.h>
#include <stdlib.h>

#define TAMANHO_ARRAY 20

int comparar(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int calcularModa(int array[], int tamanho) {
    int moda = array[0];
    int contagemAtual = 1;
    int maxContagem = 1;

    for (int i = 1; i < tamanho; i++) {
        if (array[i] == array[i - 1]) {
            contagemAtual++;
        } else {
            contagemAtual = 1;
        }

        if (contagemAtual > maxContagem) {
            maxContagem = contagemAtual;
            moda = array[i];
        }
    }

    return moda;
}

double calcularMediana(int array[], int tamanho) {
    qsort(array, tamanho, sizeof(int), comparar);

    if (tamanho % 2 == 0) {
        return (array[tamanho / 2 - 1] + array[tamanho / 2]) / 2.0;
    } else {
        return array[tamanho / 2];
    }
}

double calcularMedia(int array[], int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += array[i];
    }
    return (double)soma / tamanho;
}

int main() {
    int array[TAMANHO_ARRAY];

    printf("Digite os elementos do array (%d elementos):\n", TAMANHO_ARRAY);
    for (int i = 0; i < TAMANHO_ARRAY; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    int moda = calcularModa(array, TAMANHO_ARRAY);
    printf("Moda: %d\n", moda);

    double mediana = calcularMediana(array, TAMANHO_ARRAY);
    printf("Mediana: %.2f\n", mediana);

    double media = calcularMedia(array, TAMANHO_ARRAY);
    printf("Média: %.2f\n", media);

    return 0;
}
