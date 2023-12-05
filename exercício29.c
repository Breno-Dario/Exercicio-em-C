#include <stdio.h>

int main(){
   double salario;
   double desconto;

   printf("Digite o salário do funcionário: ");
      scanf("%lf", &salario);

   desconto = salario * 0.11;

   if ( desconto > 334.29){
       desconto = 334.29;
   }   
   
     printf("O desconto previdenciário é de: %.2lf\n", desconto);

     return 0;

}