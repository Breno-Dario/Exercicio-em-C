#include <stdio.h>

int main(){
  int n;
  int soma = 0;
  int i;

printf("Digite 5 números: \n");

for (i = 0; i <= 5; i++){
    scanf("%d", &n);
    soma += n;
}
 double media = (double)soma / 5; 

printf("A média dos números digitados é: %.2f\n", media);

return 0;

}