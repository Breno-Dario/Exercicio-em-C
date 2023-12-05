#include <stdio.h>

int main(){
    int numero, i;

    printf("Digite um número menor que 32: ");
    scanf("%d", &numero);

    if (numero < 0 || numero >=32) {
       printf("O número deve ser maior ou igual a 0 e menor que 32.\n"); 
    } else {
        printf("A representação binária de %d é: ", numero);

      for (i = 31; i >= 0; i--) {
        int bit = (numero >> i) & 1;
        printf("%d", bit);
      }
     printf("\n");

    }
      return 0;
}