#include <stdio.h>
#include <string.h>

void gerarSubstring(const char *original, int inicio, int fim, char *substring) {
    int tamanhoOriginal = strlen(original);
    int tamanhoSubstring = fim - inicio + 1;

    if (inicio < 0 || inicio >= tamanhoOriginal || fim < 0 || fim >= tamanhoOriginal || inicio > fim) {
        printf("Erro: Posições inválidas para gerar a substring.\n");
        return;
    }

    for (int i = 0; i < tamanhoSubstring; i++) {
        substring[i] = original[inicio + i];
    }

    substring[tamanhoSubstring] = '\0';
}

int main() {
    char original[100];
    char substring[100];
    int inicio, fim;

    printf("Digite uma string: ");
    fgets(original, sizeof(original), stdin);

    original[strcspn(original, "\n")] = '\0';

    printf("Digite a posição inicial da substring: ");
    scanf("%d", &inicio);

    printf("Digite a posição final da substring: ");
    scanf("%d", &fim);

    gerarSubstring(original, inicio, fim, substring);
    printf("Substring: %s\n", substring);

    return 0;
}
