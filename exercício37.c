#include <stdio.h>

int main(){
  int tipoPulverizacao;
  float areaPulverizacao, custo, desconto = 0;

  printf("Digite o tipo de pulverizção (1 a 4): ");
  scanf("%d", &tipoPulverizacao);

  printf("Digite a área a ser pulverizada (em acres): ");
  scanf("%f", &areaPulverizacao);

  switch (tipoPulverizacao){
    case 1:
    custo = 50.0 * areaPulverizacao;
    break;
    case 2: 
    custo = 100.0 * areaPulverizacao;
    break;
    case 3: 
    custo = 150.0 * areaPulverizacao;
    break;
    case 4: 
    custo = 250.0 * areaPulverizacao;
    break;
    default: 
        printf("Tipo de pulverização inválida.\n");
    break;    
  }

if (areaPulverizacao > 1000) {
    desconto += 0.05 * custo;
}

custo -= desconto;

if (custo > 750.0){
    desconto += 0.1 * (custo - 750.0);
}

custo -= desconto;

printf("Valor a ser pago: R$ %.2lf", custo);

return 0;
}
