#include <stdio.h>

int main() {
    float numero;


 printf("Digite um número: ");
    scanf("%f", &numero);

    if (numero > 0) {
        printf("O número %.2f é positivo. \n", numero);
    } else if (numero < 0 ) {
        printf("O número %.2f é negativo. \n", numero);
    } else {
        printf("O número é zero.\n");
    }

return 0;

}