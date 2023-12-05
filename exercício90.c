#include <stdio.h>
#include <string.h>
#include <ctype.h>

int ehVogal(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

void organizaVogaisConsoantes(const char *entrada, char *saida) {
    int len = strlen(entrada);
    int i, j;

    for (i = 0, j = 0; i < len; i++) {
        if (ehVogal(entrada[i])) {
            saida[j++] = entrada[i];
        }
    }

    for (i = 0; i < len; i++) {
        if (!ehVogal(entrada[i])) {
            saida[j++] = entrada[i];
        }
    }

    saida[j] = '\0';
}

int main() {
    char entrada[100];
    char saida[100];

    printf("Digite uma string: ");
    fgets(entrada, sizeof(entrada), stdin);

    entrada[strcspn(entrada, "\n")] = '\0';

    organizaVogaisConsoantes(entrada, saida);

    printf("String organizada: %s\n", saida);

    return 0;
}
