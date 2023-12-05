#include <stdio.h>

int main(){
  int array[20];
  int i, menor, maior;


  printf("Digite 20 númros inteiros: \n");
  for (i = 0; i < 20; i ++){
    scanf("%d", &array[i]);
  }

  menor = maior = array[0];

  for (i = 1; i < 20; i++){
    if (array[i] < menor){
        menor = array[i];
    }
    
    if (array[i] > maior){
        maior = array[i];
    }
  }
  
  printf("\nMenor valor: %d \n", menor);
  printf("\nMaior valor: %d \n", maior);


return 0;

  }
