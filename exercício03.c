#include <stdio.h>

int main(){

float area, perimetro, raio;

printf("Digite o valor da área da circunferência: ");
scanf("%f", &area);

printf("Digite o valor do perímetro da circunferência: ");
scanf("%f", &perimetro);

printf("Digite o valor do raio da circunferência: ");
scanf("%f", &raio);

area = 3,14 * raio * raio;
perimetro = 2 * 3,14 * raio;

printf("O valor de uma aréa na circunferência é %.2f\n", area);
printf("O valor de um perímetro na circunferência é %.2f\n", perimetro);

return 0;

}