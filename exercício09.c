#include <stdio.h>
#include <math.h>

int main() {
    double raio, altura, volume;

    printf("Digite o raio da lata de óleo (em centímetros): ");
    scanf("%lf", &raio);

    printf("Digite a altura da lata de óleo (em centímetros): ");
    scanf("%lf", &altura);

    volume = 3.14 * raio * raio * altura;

    printf("O volume da lata de óleo é: %.2lf centímetros cúbicos\n", volume);

    return 0;
}
