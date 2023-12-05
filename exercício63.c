#include<stdio.h>

int main(void){
   double vetor1[10];
   double vetor2[10];
   double resultado[10];
   int i;


   printf("Digite elementos do primeiro vetor (10 números reais): \n");
   for(i = 0; i < 10; i++){
     scanf("%lf", &vetor1[i]);

   }
  
   printf("Digite os elementos do segundo vetor (10 números reais): \n");
   for(i = 0; i < 10; i++){
    scanf("%lf", &vetor2[i]);

   }
   
  for (i = 0; i < 10; i++){
    resultado[i] = vetor1[i] + vetor2[i];
  }

  printf("Vetor resultado da soma: \n");
  for ( i = 0; i < 10; i++){
     printf("\n%lf\n", resultado[i]);
  }
  

return 0;
}