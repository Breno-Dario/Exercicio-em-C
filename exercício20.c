#include <stdio.h>
#include <math.h>

int main(){
  float mercadoria, entra, prestacao;

printf("Digite o valor da mercadoria: R$");
    scanf("%f", &mercadoria);

entra = mercadoria / 3;
prestacao = entra;

printf("Valor da entrada: R$ %.2f\n", entra);
printf("Valor das duas prestações: R$ %.2f\n", prestacao);

return 0;
}