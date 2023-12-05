#include <stdio.h>

int main(){
  int vetor1[10];
  int vetor2[10];

  for (int i = 0; i < 10; i++){
    vetor1[i] = i * 2;
  }

  for (int i = 0; i < 10; i++){
    vetor2[i] = vetor1[i];
  }

  printf("Contéudo do segundo vetor (vetor2):\n");
  for (int i = 0; i < 10;  i++){
    printf("\n%d\n", vetor2[i]);
  }

  return 0;
}