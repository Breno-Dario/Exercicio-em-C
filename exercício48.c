#include <stdio.h>

int main(){
    int N;
    int i;
    int ehPrimo = 1;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &N);

    if (N < 2) {
        ehPrimo = 0;
    } else {
        for ( i = 2; i <= N / 2; i++){
            if (N % i == 0){
                ehPrimo = 0;
                break;
            }
        }
    }
if (ehPrimo){
    printf("%d é um número primo.\n", N);
} else {
    printf("%d não é um número primo.\n", N);
}

return 0;
}