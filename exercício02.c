#include <stdio.h>

int main (){

float base, altura, area, perimetro;

printf("Digite o valor da base de um quadrado: ");
scanf("%f", &base);

printf("Digite a valor da altura de um quadrado: ");
scanf("%f", &altura);

area = base * altura;
perimetro = altura * altura;

printf("A aréa de um quadrado é %.2f\n", area);
printf("O perímetro de um quadrado é %.2f\n", perimetro);

return 0;

}