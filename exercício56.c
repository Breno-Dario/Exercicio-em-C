#include <stdio.h>

int somaDivisoresProprios(int numero){
   int soma = 0;
   for (int i = 1; i <= numero/2; i++) {
      if(numero % i == 0) {
        soma += i;
      }

   }
   return soma;

}
 int main(){
   int numero;

   printf("Digite um número: ");
    scanf("%d", &numero);

   int somaDivisores = somaDivisoresProprios(numero);

   if (somaDivisores == numero){
      printf("%d é um número perfeito\n", numero);
   } else {
       printf("%d não é um número perfeito.\n", numero);
   }

  return 0;

 }