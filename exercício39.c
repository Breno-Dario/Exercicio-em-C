#include <stdio.h>

int main(){
  int agencia, dv;
  int soma = 0;
  int peso = 2;

  printf("Digite os 4 primeiro dígitos da agência: ");
  scanf("%d", &agencia);

  while (agencia > 0) {
    int digito = agencia % 10;
    soma += digito * peso;
    peso++;
    agencia /= 10;
  }
  
  dv = (11 - (soma % 11)) % 11;

  if (dv == 10){
    printf("Número da agência completo: %04d-X\n");
  } else {
    printf("Número da agência completo: %04d-%d\n", agencia, dv);
  }

return 0;

}