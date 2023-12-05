#include <stdio.h>
#include <string.h>
#include <ctype.h>

void geraFormatoNome(const char *nomeCompleto, char *nomeFormatado) {
    int comprimento = strlen(nomeCompleto);

    // Encontrar o último espaço na string (último nome)
    int ultimoEspaco = comprimento - 1;
    while (ultimoEspaco >= 0 && nomeCompleto[ultimoEspaco] != ' ') {
        ultimoEspaco--;
    }

    // Verificar se há pelo menos um nome
    if (ultimoEspaco < 0) {
        printf("Formato de nome inválido.\n");
        return;
    }

    // Copiar o último nome
    strcpy(nomeFormatado, &nomeCompleto[ultimoEspaco + 1]);

    // Adicionar vírgula e espaço
    strcat(nomeFormatado, ", ");

    // Adicionar as iniciais dos outros nomes
    for (int i = 0; i < ultimoEspaco; i++) {
        if (nomeCompleto[i] == ' ') {
            if (isalpha(nomeCompleto[i + 1])) {
                // Adiciona a inicial do nome
                strncat(nomeFormatado, &nomeCompleto[i + 1], 1);
                strcat(nomeFormatado, ". ");
            }
        }
    }

    // Remover o espaço extra no final, se houver
    if (nomeFormatado[strlen(nomeFormatado) - 1] == ' ') {
        nomeFormatado[strlen(nomeFormatado) - 1] = '\0';
    }
}

int main() {
    char nomeCompleto[100];
    char nomeFormatado[100];

    printf("Digite uma string com nomes: ");
    fgets(nomeCompleto, sizeof(nomeCompleto), stdin);

    nomeCompleto[strcspn(nomeCompleto, "\n")] = '\0';

    geraFormatoNome(nomeCompleto, nomeFormatado);

    printf("String formatada: %s\n", nomeFormatado);

    return 0;
}
