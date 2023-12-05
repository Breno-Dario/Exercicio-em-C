#include <stdio.h>

int isTriangular(int num){
    int produto = 1;
    int i = 1;

    while (produto < num){
     produto *= i;
     i ++;
    }

    return produto == num;
}

int main(){
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

  if (isTriangular(numero)){
    printf("%d é um número triangular.\n", numero);
  } else {
    printf("%d não é um número triangular.\n", numero);
  }


 return 0;

}



