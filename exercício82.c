#include <stdio.h>
#include <string.h>

void encontraMaiorPalavra(const char *str) {
    int inicioAtual = 0, inicioMaior = 0, tamanhoAtual = 0, tamanhoMaior = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            if (tamanhoAtual > tamanhoMaior) {
                tamanhoMaior = tamanhoAtual;
                inicioMaior = inicioAtual;
            }
            tamanhoAtual = 0;
            inicioAtual = i + 1;
        } else {
            tamanhoAtual++;
        }
    }

    if (tamanhoAtual > tamanhoMaior) {
        tamanhoMaior = tamanhoAtual;
        inicioMaior = inicioAtual;
    }

    printf("A maior palavra: ");
    for (int i = 0; i < tamanhoMaior; i++) {
        printf("%c", str[inicioMaior + i]);
    }
    printf("\n");
}

int main() {
    char input[100];

    printf("Digite uma string normalizada: ");
    fgets(input, sizeof(input), stdin);

    encontraMaiorPalavra(input);

    return 0;
}
