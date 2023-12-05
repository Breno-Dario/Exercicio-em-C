#include <stdio.h>

int main(){
  int array[20];
  int i, menor, maior, posicaoMenor, posicaoMaior;


  printf("Digite 20 númros inteiros: \n");
  for (i = 0; i < 20; i ++){
    scanf("%d", &array[i]);
  }

  menor = maior = array[0];
  posicaoMenor = posicaoMaior = 0;  

  for (i = 1; i < 20; i++){
    if (array[i] < menor){
        menor = array[i];
        posicaoMenor = i;
    }
    
    if (array[i] > maior){
        maior = array[i];
        posicaoMaior = 1;
    }
  }
  
  printf("\nMenor valor: %d (posição %d)\n", menor, posicaoMenor);
  printf("\nMaior valor: %d (posição %d)\n", maior, posicaoMaior);


return 0;

  }
