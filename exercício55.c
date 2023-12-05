#include <stdio.h>

int somaDivisoresProprios(int numero) {
    int soma = 0;
    for (int i = 1; i <= numero / 2; i++) {
        if (numero % i == 0) {
            soma += i;
        }
    }
    return soma;
}

int main() {
    int numero1, numero2;

    printf("Digite o primeiro número: ");
    scanf("%d", &numero1);

    printf("Digite o segundo número: ");
    scanf("%d", &numero2);

    int soma1 = somaDivisoresProprios(numero1);
    int soma2 = somaDivisoresProprios(numero2);

    if (soma1 == numero2 && soma2 == numero1) {
        printf("%d e %d são números amigos!\n", numero1, numero2);
    } else {
        printf("%d e %d não são números amigos.\n", numero1, numero2);
    }

    return 0;
}
