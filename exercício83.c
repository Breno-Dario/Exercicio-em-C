#include <stdio.h>
#include <string.h>

void geraSubstring(const char *str, int inicio, int fim, char *substring) {
    int j = 0;

    for (int i = inicio; i <= fim && str[i] != '\0'; i++) {
        substring[j++] = str[i];
    }

    substring[j] = '\0';
}

int main() {
    char original[100];
    char substring[100];
    int inicio, fim;

    printf("Digite uma string: ");
    fgets(original, sizeof(original), stdin);

    printf("Digite a posição inicial da substring: ");
    scanf("%d", &inicio);

    printf("Digite a posição final da substring: ");
    scanf("%d", &fim);

    if (inicio < 0 || fim >= strlen(original) || inicio > fim) {
        printf("Posições inválidas.\n");
        return 1;
    }

    geraSubstring(original, inicio, fim, substring);

    printf("Substring: %s\n", substring);

    return 0;
}
