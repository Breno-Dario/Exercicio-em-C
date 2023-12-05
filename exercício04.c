#include <stdio.h>

int main(){

    double lado1, lado2, lado3, petrimetro;


    printf("Digite o comprimento do primeiro lado: ");
    scanf("%lf", &lado1);

    printf("Digite o segundo lado: ");
    scanf("%lf", &lado2);
  
    printf("Digite o terceiro lado: ");
    scanf("%lf", &lado3);

    petrimetro = lado1 + lado2 + lado3;

    printf("O perímetro de um triângulo é %.2lf", petrimetro);

    return 0;
}


