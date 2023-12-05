#include <stdio.h>

int main() {
    int vetor[20]; 
    int i;

    for (i = 0; i < 20; i++) {
        vetor[i] = 0;
    }

        for (i = 0; i < 20; i++) {
        printf("Posição %d: %d\n", i, vetor[i]);
    }

    return 0;
}
