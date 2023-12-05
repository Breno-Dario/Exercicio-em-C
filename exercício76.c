#include <stdio.h>
#include <string.h>

int contarVogais(const char *str) {
    int contador = 0;
    int tamanho = strlen(str);

    for (int i = 0; i < tamanho; i++) {
        char caractere = str[i];

        // Verifica se o caractere é uma vogal (maiúscula ou minúscula)
        if (caractere == 'a' || caractere == 'e' || caractere == 'i' ||
            caractere == 'o' || caractere == 'u' || caractere == 'A' ||
            caractere == 'E' || caractere == 'I' || caractere == 'O' ||
            caractere == 'U') {
            contador++;
        }
    }

    return contador;
}

int main() {
    char string[100];

    printf("Digite uma string: ");
    fgets(string, sizeof(string), stdin);

    string[strcspn(string, "\n")] = '\0';

    int quantidadeVogais = contarVogais(string);
    printf("Número de vogais na string: %d\n", quantidadeVogais);

    return 0;
}
