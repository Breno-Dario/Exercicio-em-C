#include <stdio.h>

int main(){
   char tipoCombustivel;
   double litrosVendidos, precoLitro, valorPagar;

   printf("Digite o tipo de combustivel (A para álcool, G para gasolina): ");
      scanf(" %c", &tipoCombustivel);

   printf("Digite a qauntidade de litros vendidos: ");
      scanf("%lf", &litrosVendidos);

   if (tipoCombustivel == 'A' || tipoCombustivel == 'a') {
         precoLitro = 1.90;
   } else if (tipoCombustivel == 'G' || tipoCombustivel == 'g') { 
       precoLitro = 2.70; 
   } else {
      printf("Tipo de conbustível inválido.\n");
      return 1;
   }   

   if (litrosVendidos <= 25) {
    valorPagar = litrosVendidos * precoLitro * (1 - 0.02);
   } else {
    valorPagar = litrosVendidos * precoLitro * (1 - 0.04); 
}

   printf("Valor a pagar: R$ %.2lf\n", valorPagar);

   return 0;

}