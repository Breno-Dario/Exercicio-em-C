#include <stdio.h>

int main(){
 int vetor[15];
 int valor, ocorrencias = 0;

 printf("Digite os valores para o vetor de 15 posições: \n");
 for (int i = 0; i < 15; i++){
    scanf("%d", &vetor[i]);
 } 

 printf("Digite o valor a ser procurado: ");
 scanf("%d", &valor);

 for (int i = 0; i < 15; i++) {
  if (vetor[i] == valor) {
    ocorrencias++;
  }
 
printf("O valor %d ocorre %d vezes no vetor.\n", valor, ocorrencias);

return 0;

 }
 














}