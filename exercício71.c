#include <stdio.h>

#define TAMANHO_VETOR 10

int buscaSequencial(int vetor[], int tamanho, int chave) {
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] == chave) {
            return i;  
        }
    }
    return -1;  
}

int main() {
    int vetor[TAMANHO_VETOR];
    
    printf("Digite os elementos do vetor (%d elementos):\n", TAMANHO_VETOR);
    for (int i = 0; i < TAMANHO_VETOR; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    int chave;
    printf("Digite o inteiro a ser procurado: ");
    scanf("%d", &chave);

    int resultado = buscaSequencial(vetor, TAMANHO_VETOR, chave);

    if (resultado != -1) {
        printf("O inteiro %d foi encontrado na posição %d.\n", chave, resultado + 1);
    } else {
        printf("O inteiro %d não foi encontrado no vetor.\n", chave);
    }

    return 0;
}
