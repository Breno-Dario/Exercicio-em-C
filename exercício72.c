#include <stdio.h>

#define TAMANHO_VETOR 10

int buscaBinaria(int vetor[], int tamanho, int chave) {
    int inicio = 0;
    int fim = tamanho - 1;

    while (inicio <= fim) {
        int meio = inicio + (fim - inicio) / 2;

        if (vetor[meio] == chave) {
            return meio;  
        }

        if (vetor[meio] < chave) {
            inicio = meio + 1;
        } else {
            fim = meio - 1;
        }
    }

    return -1;  
}

int main() {
    int vetor[TAMANHO_VETOR];

    printf("Digite os elementos do vetor ordenado (%d elementos):\n", TAMANHO_VETOR);
    for (int i = 0; i < TAMANHO_VETOR; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    int chave;
    printf("Digite o inteiro a ser procurado: ");
    scanf("%d", &chave);

    int resultado = buscaBinaria(vetor, TAMANHO_VETOR, chave);

    if (resultado != -1) {
        printf("O inteiro %d foi encontrado na posição %d.\n", chave, resultado + 1);
    } else {
        printf("O inteiro %d não foi encontrado no vetor.\n", chave);
    }

    return 0;
}
