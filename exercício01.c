#include <stdio.h>

int main()
{
   float base, altura, area, perimetro;

   printf("Digite o valor da base do retângulo: ");
   scanf("%f", &base);

   printf("Digite o valor da altura do retângulo: ");
   scanf("%f", &altura);

 area = base * altura;
 perimetro = 2 * (base + altura);

 printf("A área do retângulo é: %.2f\n", area);
 printf("O perímetro do retângulo é: %.2f\n", perimetro);

   return 0; 
}