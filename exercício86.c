#include <stdio.h>
#include <string.h>

int valorRomano(char c) {
    switch (c) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default:

            printf("Caractere romano inválido: %c\n", c);
            return 0;
    }
}

int romanoParaDecimal(const char *romano) {
    int resultado = 0;
    int valorAnterior = 0;


    for (int i = strlen(romano) - 1; i >= 0; i--) {
        int valorAtual = valorRomano(romano[i]);

        if (valorAtual == 0) {

            return 0;
        }

        if (valorAtual < valorAnterior) {
            resultado -= valorAtual;
        } else {
            resultado += valorAtual;
        }

        valorAnterior = valorAtual;
    }

    return resultado;
}

int main() {
    char romano[100];

    printf("Digite um número em algarismos romanos: ");
    scanf("%s", romano);

    int decimal = romanoParaDecimal(romano);

    if (decimal != 0) {
        printf("Representação decimal: %d\n", decimal);
    }

    return 0;
}
