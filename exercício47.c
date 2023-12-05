#include <stdio.h>

int main(){
   int A, B;

printf("Digite o número da letra (A): ");
scanf("%d", &A);

printf("Digite o número da letra (B): ");
scanf("%d", &B);

if ( B == 0){
   printf("Error da divisão de resto.\n"); 
} else {
  while ( A >=B){
    A -= B;
  }

}

  printf("O resto da divisão é %d\n", A);

return 0;

}