#include <stdio.h>

int main(){
  int A, B;

  printf("Digite um número para (A): ");
  scanf("%d", &A);

  printf("Digite um número para (B): ");
  scanf("%d", &B);

  if ( B == 0){
    printf("Erro de divisão, zero não é permitido");
  } else {
     int quociente = 0;
   
    while ( A >= B){
        A -=B;
        quociente++;
    }
    printf("O quociente da divisão é: %d\n", quociente);

  }

  return 0;

}