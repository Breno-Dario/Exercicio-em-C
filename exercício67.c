#include <stdio.h>

int main() {
    int vetor1[10]; 
    int vetor2[10];
    int vetor3[10]; 

    printf("Digite os valores para o primeiro vetor:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor1[i]);
    }

    printf("Digite os valores para o segundo vetor:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor2[i]);
    }

    for (int i = 0; i < 10; i++) {
        if (vetor1[i] > vetor2[i]) {
            vetor3[i] = vetor1[i];
        } else {
            vetor3[i] = vetor2[i];
        }
    }

    printf("Conteúdo do terceiro vetor (vetor3):\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetor3[i]);
    }
    printf("\n");

    return 0;
}
