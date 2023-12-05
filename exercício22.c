#include <stdio.h>
#include <math.h>

int main() {
    double numero;

    printf("Digite um  número: ");
    scanf("%lf", &numero);

    double modulo = fabs(numero);

    printf("O módulo do número %.2lf é %.2lf\n", numero, modulo);

return 0;

}