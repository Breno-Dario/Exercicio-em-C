#include <stdio.h>
#include <math.h>

int main (){
   double num1, num2, num3;
   double peso1, peso2, peso3;
   double media_ponderada;

   printf("Digite o primeiro número: ");
     scanf("%lf", &num1);
   printf("Digite o peso para o primeiro número; ");
     scanf("%lf", &peso1);

   printf("Digite o segundo número: ");
     scanf("%lf", &num2);
   printf("Digite o peso do segundo número: ");
     scanf("%lf", &peso2);      

    printf("Digite p terceiro número: ");
      scanf("%lf", &num3);
    printf("Digite o peso do terceiro número: ");
      scanf("%lf", &peso3);
      
      media_ponderada = (num1 * peso1 + num2 * peso2 + num3 * peso3) / (peso1 + peso2 + peso3);

      printf("A média ponderada é: %lf\n", media_ponderada);   

    return 0;

}