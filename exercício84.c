#include <stdio.h>
#include <string.h>
#include <ctype.h>

int ehPalindromo(const char *str) {
    int inicio = 0;
    int fim = strlen(str) - 1;

    while (inicio < fim) {

        while (isspace(str[inicio])) {
            inicio++;
        }
        while (isspace(str[fim])) {
            fim--;
        }

        // Compara os caracteres
        if (tolower(str[inicio]) != tolower(str[fim])) {
            return 0; 
        }

        inicio++;
        fim--;
    }

    return 1; 
}

int main() {
    char input[100];

    printf("Digite uma string normalizada: ");
    fgets(input, sizeof(input), stdin);

    if (ehPalindromo(input)) {
        printf("A string é um palíndromo.\n");
    } else {
        printf("A string não é um palíndromo.\n");
    }

    return 0;
}
