#include <stdio.h>
#include <string.h>

int hexParaDecimal(const char *hex) {
    int comprimento = strlen(hex);
    int decimal = 0;
    int base = 1;


    for (int i = comprimento - 1; i >= 0; i--) {

        int valor;
        if (hex[i] >= '0' && hex[i] <= '9') {
            valor = hex[i] - '0';
        } else if (hex[i] >= 'A' && hex[i] <= 'F') {
            valor = hex[i] - 'A' + 10;
        } else if (hex[i] >= 'a' && hex[i] <= 'f') {
            valor = hex[i] - 'a' + 10;
        } else {

            printf("String hexadecimal inválida.\n");
            return -1;
        }

        decimal += valor * base;

        base *= 16;
    }

    return decimal;
}

int main() {
    char hex[100];

    printf("Digite uma string hexadecimal: ");
    scanf("%s", hex);

    int decimal = hexParaDecimal(hex);

    if (decimal != -1) {
        printf("Representação decimal: %d\n", decimal);
    }

    return 0;
}
