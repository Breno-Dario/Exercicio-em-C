#include <stdio.h>

int main(){
   int numero;
   int dado1, dado2;

   printf("Digite um número ( entre 2 a 12): ");
   scanf("%d", &numero);

   if (numero < 2 || numero > 12) {
    printf("Número inválido. Digite um número entre 2 a 12.\n");
    return 1;
   }

   printf("Combinação para obter %d\n", numero);

   for ( dado1 = 1; dado1 <= 6; dado1++) {
    for (dado1 = 1; dado2 <= 6; dado2++) {
        if (dado1 + dado2 == numero){
            printf("%d%d\n", dado1, dado2);
        }
      }
   }
   
return 0;

}