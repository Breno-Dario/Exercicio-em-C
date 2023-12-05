#include <stdio.h>
#include <string.h>

int contarOcorrencias(const char *str, char caractere) {
    int contador = 0;
    int tamanho = strlen(str);

    for (int i = 0; i < tamanho; i++) {

        if (str[i] == caractere) {
            contador++;
        }
    }

    return contador;
}

int main() {
    char string[100];
    char caractere;

    printf("Digite uma string: ");
    fgets(string, sizeof(string), stdin);

    string[strcspn(string, "\n")] = '\0';

    printf("Digite um caractere para contar: ");
    scanf(" %c", &caractere);

    int quantidadeOcorrencias = contarOcorrencias(string, caractere);
    printf("Número de ocorrências de '%c' na string: %d\n", caractere, quantidadeOcorrencias);

    return 0;
}
