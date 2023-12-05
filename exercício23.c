#include <stdio.h>
#include <math.h>

int main(){
    int numero;

    printf("Digite um número: ");
       scanf("%d", &numero);

if (numero % 2==0) {
    printf("%d é um número par. \n", numero);
}  else {
    printf("%d é um número impar. \n", numero);
}

return 0;

}