#include <stdio.h>

// Função para calcular o fatorial de um número
double calcularFatorial(int numero) {
    double fatorial = 1.0;
    for (int i = 1; i <= numero; i++) {
        fatorial *= i;
    }
    return fatorial;
}

int main() {
    int n;
    double euler = 1.0;

    printf("Digite o número de termos N: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("O número de termos deve ser não negativo.\n");
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        double termo = 1.0 / calcularFatorial(i);
        euler += termo;
        printf("Aproximação com %d termo(s): %.15lf\n", i, euler);
    }

    return 0;
}
