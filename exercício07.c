#include <stdio.h>

int main() {
    int idadeDias, anos, meses, dias;

    printf("Digite a idade em dias: ");
    scanf("%d", &idadeDias);

    anos = idadeDias / 365;
    idadeDias %= 365;

    meses = idadeDias / 30;
    idadeDias %= 30;

    dias = idadeDias;

    printf("Idade: %d anos, %d meses e %d dias\n", anos, meses, dias);

    return 0;
}
