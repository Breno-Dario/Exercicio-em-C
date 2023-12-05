#include <stdio.h>

int main(){
    int mes;

    printf("Digite o número de mẽs (1 a 12): ");
        scanf("%d", &mes);

  switch (mes){
  case 1:
      printf("Janeiro tem 31 dias.\n");
      break;
  case 2:
      printf("Fevereiro tem 28 a 29 dias, dependendo do ano.\n");
      break;
  case 3:
      printf("Março tem 31 dias.\n");
      break;
  case 4: 
      printf("Abril tem 30 dias. \n");
      break;
  case 5: 
      printf("Maio tem 31 dias. \n");
      break;
  case 6: 
      printf("Junho tem 30 dias.\n");
      break;
  case 7:           
      printf("Julho tem 31 dias.\n");
      break;;
  case 8:
      printf("Agosto tem 31 dias.\n");
      break;
  case 9:
      printf("Setembro tem 30 dias. \n");
      break;
  case 10:
      printf("Outubro tem 31 dias. \n");
      break;
  case 11: 
      printf("Novembro tem 30 dias.\n");
      break;
  case 12:
      printf("Dezembro tem 31 dias. \n");
      break;
  default:
     printf("Número de més inválido. Por favor, insira um número de 1 a 12.\n");                                     
     break;
  }

   return 0;
}